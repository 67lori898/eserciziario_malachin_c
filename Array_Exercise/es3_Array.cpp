#include <stdio.h>

int main(int argc, char *argv[]) {
    const int DIM = 10;  
    int myVett[DIM]; 
    int vettPar[DIM];  // Array per numeri pari
    int vettDisp[DIM]; // Array per numeri dispari  
    int countPar = 0; 
    int countDisp = 0; 

    // Inserimento dei numeri
    for (int i = 0; i < DIM; i++) {
        printf("Inserisci il %d° numero: ", i + 1); // Inizio da 1 per una visualizzazione più user-friendly
        scanf("%d", &myVett[i]);  // Utilizzare '&' per passare l'indirizzo della variabile
    }

    // Contiamo i numeri pari ed i numeri dispari
    for (int i = 0; i < DIM; i++) {
        if (myVett[i] % 2 == 0) {
            vettPar[countPar] = myVett[i]; 
            countPar++; 
        } else {
            vettDisp[countDisp] = myVett[i]; 
            countDisp++; 
        }
    }

    // Stampa i numeri pari
    printf("Numeri pari: ");
    for (int i = 0; i < countPar; i++) {
        printf("%d ", vettPar[i]); // Stampa ogni numero pari
    }
    printf("\n"); // Aggiungi una nuova linea

    // Stampa i numeri dispari
    printf("Numeri dispari: ");
    for (int i = 0; i < countDisp; i++) {
        printf("%d ", vettDisp[i]); // Stampa ogni numero dispari
    }
    printf("\n"); // Aggiungi una nuova linea

    return 0; // Termina il programma
}
