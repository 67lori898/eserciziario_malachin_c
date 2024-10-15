#include <stdio.h>
#include <string.h>

void isPalindroma(char parola[]) {
    int lunghezza = strlen(parola);  // Salva la lunghezza della stringa
    int i;

    for (i = 0; i < lunghezza / 2; i++) {
        if (parola[i] != parola[lunghezza - 1 - i]) {
            // Se trova una differenza, esci e la parola non è palindroma
            printf("La parola non è palindroma.\n");
            return;
        }
    }

    // Se il ciclo termina senza trovare differenze
    printf("La parola è palindroma.\n");
}

int main(int argc, char *argv[]) {
    // Verifica che siano stati passati 2 argomenti
    if (argc != 2) {
        printf("Numero argomenti non valido. Utilizzo: %s <stringa>\n", argv[0]);
        return -1; 
    }

    // Il secondo parametro è la stringa da valutare come palindroma
    isPalindroma(argv[1]); // Passa il primo argomento
    return 0; // Termina il programma
}
