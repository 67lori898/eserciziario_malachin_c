#include <math.h>  // Includiamo la libreria math, per la funzione sqrt
#include <stdio.h>

int main()
{
    float num1 = 0, num2 = 0;
    float rapporto = 0.0;
    float rad = 0;

    do {
        // Input dei due numeri
        printf("Inserisci il primo numero: ");
        scanf("%f", &num1);  // %f per numeri float
        printf("Inserisci il secondo numero: ");
        scanf("%f", &num2);  // %f per numeri float

        // Controllo della divisione per zero
        if (num1 == 0 || num2 == 0) {
            printf("ERRORE: divisione per 0\n");
            break;  // Esce dal ciclo
        }

        // Determina il maggiore e minore, poi calcola il rapporto
        if (num1 > num2) {
            rapporto = num1 / num2;
        } else {
            rapporto = num2 / num1;
        }

        // Se il rapporto è positivo, calcola la radice quadrata
        if (rapporto > 0) {
            rad = sqrt(rapporto);
            printf("La radice quadrata del rapporto è: %f\n", rad);
        } else {
            printf("ERRORE: rapporto negativo, non è possibile calcolare la radice quadrata\n");
            break;  // Esce dal ciclo
        }

    } while (num1 != 0 && num2 != 0);  // Termina quando uno dei due numeri è zero

    return 0;
}
