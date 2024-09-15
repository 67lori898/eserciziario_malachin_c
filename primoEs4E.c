#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    float rapporto = 0.0;

    do {
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);

        if (num2 == 0) {
            printf("Errore: divisione per zero non permessa.\n");
            break; 
        }

        if (num1 > num2) {
            rapporto = (float)num2 / num1;
        } else {
            rapporto = (float)num1 / num2;
        }

        printf("Il rapporto tra i due numeri è: %f\n", rapporto);

    } while (num1 != 0 && num2 != 0); // termina quando uno dei due valori è uguale a zero (o entrambi i valori)

    return 0;
}
