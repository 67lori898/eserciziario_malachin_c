#include <stdio.h>

int main()
{
    int A = 0, B = 0, C = 0; 
    int max = -1, min = 1000000;  // Inizializzazione dei valori di min e max

    do
    {
        printf("Inserisci il valore di A: ");
        scanf("%d", &A);
        printf("Inserisci il valore di B: ");
        scanf("%d", &B);
        printf("Inserisci il valore di C: ");
        scanf("%d", &C);

        if (A < B && B < C)
        {
            if (A < min)
            {
                min = A; 
            }
            if (C > max)
            {
                max = C;
            }
        }
        else
        {
            printf("La terna di numeri non è in ordine (A<B<C)\n");
        }

    } while (A >= 0 && B >= 0 && C >= 0); 

    printf("\nIl valore minimo della terna di numeri è: %d\n", min);
    printf("Il valore massimo della terna di numeri è: %d\n", max);

    return 0; 
}
