
#include <stdio.h>
#include <stdbool.h>  // Include per il tipo booleano

// Prototipi delle varie funzioni (vanno messi sempre prima del main)
int calcolaAddizione(int *n1, int *n2);
int calcolaSottrazione(int *n1, int *n2);
int calcolaMoltiplicazione(int *n1, int *n2);
int calcolaDivisione(int *n1, int *n2);

int main(int argc, char *argv[]) {

	int n1 = 0, n2 = 0;
	int miaScelta = 0;
	bool isContinua = true;  // Uso di bool invece di boolean

	// Inserimento dei numeri
	printf("Inserisci il primo numero: ");
	scanf("%d", &n1);
	printf("Inserisci il secondo numero: ");
	scanf("%d", &n2);

	// Ciclo per continuare fino a che l'utente non sceglie di uscire
	while (isContinua) {
		// Menu di scelta
		printf("\nOPERAZIONI:\n1] Addizione\n2] Sottrazione\n3] Moltiplicazione\n4] Divisione\n0] Esci dal programma\n");
		printf("Inserisci la tua scelta: ");
		scanf("%d", &miaScelta);

		// Switch per eseguire l'operazione scelta
		switch (miaScelta) {
		case 1:  // Addizione
			printf("Risultato addizione: %d\n", calcolaAddizione(&n1, &n2));
			break;
		case 2:  // Sottrazione
			printf("Risultato sottrazione: %d\n", calcolaSottrazione(&n1, &n2));
			break;
		case 3:  // Moltiplicazione
			printf("Risultato moltiplicazione: %d\n", calcolaMoltiplicazione(&n1, &n2));
			break;
		case 4:  // Divisione (controlla se il divisore è diverso da 0)
		
			if (n2 != 0) { 
				printf("Risultato divisione: %d\n", calcolaDivisione(&n1, &n2));
			} else {
				printf("Errore: non puoi dividere per 0!\n");
			}
			break;
		case 0:  // Esci dal programma
			isContinua = false;
			printf("Uscita dal programma.\n");
			break;
		default:
			printf("Scelta non valida. Riprova.\n");
			break;
		}
	}

	return 0; // Termina il programma
}

// Funzione per calcolare l'addizione
int calcolaAddizione(int *n1, int *n2) {
	return *n1 + *n2;
}

// Funzione per calcolare la sottrazione
int calcolaSottrazione(int *n1, int *n2) {
	return *n1 - *n2;
}

// Funzione per calcolare la moltiplicazione
int calcolaMoltiplicazione(int *n1, int *n2) {
	return (*n1) * (*n2);
}

// Funzione per calcolare la divisione (attenzione al controllo del divisore)
int calcolaDivisione(int *n1, int *n2) {
	return (*n1) / (*n2);
}

