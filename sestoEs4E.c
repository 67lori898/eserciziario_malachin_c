#include <stdio.h>
#include <math.h>

int main()
{
    int N = 0; // Numero totale che l'utente deve inserire
    float somma = 0; 
    int myNum = 0, i = 0;
    float radice = 0;

    // Controlla che N sia maggiore di 0
    do
    {
        printf("Inserisci N (deve essere maggiore di 0): ");
        scanf("%d", &N);

        if (N <= 0)
        {
            printf("ERRORE: Hai inserito un numero negativo o 0.\n");
        }
    } while (N <= 0);

 
    while (i < N) // Solo controllo su N, il ciclo si ferma dopo N iterazioni
    {
        printf("Inserisci un valore: \n");
        scanf("%d", &myNum);

        if (myNum >= 0)
        {
            radice = sqrt(myNum); // Calcola della radice tramite la funzione sqrt(); 
            somma += radice;      
            i++;                  // Incrementa il contatore solo se l'input è valido
        }
        else
        {
            printf("Non si può fare la radice di un numero negativo.\n");
            break; // Esce dal ciclo se viene inserito un numero negativo
        }
    }

    printf("La somma totale delle radici è: %2.f\n", somma);
    return 0;
}
