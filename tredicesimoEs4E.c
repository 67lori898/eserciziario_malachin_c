#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, count = 0;

    // Ciclo per ottenere due numeri positivi, con num1 < num2
    do 
    {
        printf("Inserisci il primo numero positivo: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero positivo: ");
        scanf("%d", &num2);
    } while (num1 >= num2 || num1 <= 0 || num2 <= 0); // Continua fino a quando i numeri non soddisfano la condizione

    // Ciclo per stampare numeri dispari tra num1 e num2
    count = num1;
    do
    {
        if (count % 2 != 0)
        {
            printf("\n%d", count); // Stampa il numero dispari
        }
        count++;
    } while (count <= num2);

    
}
