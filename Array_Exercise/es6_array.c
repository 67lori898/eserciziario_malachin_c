#include <stdio.h>
#include <string.h>
#include <ctype.h> // Per usare tolower

// Il metodo è void perchè restituisce due valori (vocali e consonanti).
void conta_vocali_consonanti(char parola[], int *vocali, int *consonanti) {
    int i = 0;
    int lunghezza = strlen(parola); 
    
    for (i = 0; parola[i] != '\0'; i++) { // Cicla fino al termine della stringa
        char c = tolower(parola[i]); // Imposta tutti i caratteri in minuscolo

        // Verifica se il carattere è una lettera
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vocali)++; // Incrementa il valore delle vocali
            } else {
                (*consonanti)++; // Incrementa il valore delle consonanti
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Numero argomenti non valido. Utilizzo: %s <stringa>\n", argv[0]);
        return -1; 
    }
    
    int vocali = 0; 
    int consonanti = 0;
    
    // Conta vocali e consonanti nella stringa passata da riga di comando
    conta_vocali_consonanti(argv[1], &vocali, &consonanti); 
    
    // Stampa i risultati
    printf("Le vocali presenti all'interno della stringa sono: %d\n", vocali);
    printf("Le consonanti presenti all'interno della stringa sono: %d\n", consonanti);

    return 0;
}
