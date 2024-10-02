#include <stdio.h>

int main()
{
	int num1, num2;
	int prodotto = 0, somma=0;
	

	do {
		printf("Inserisci il primo numero: ");
		scanf("%d", &num1);
		printf("Inserisci il secondo numero: ");
		scanf("%d", &num2);
		prodotto=num1*num2;
        printf("Il prodotto tra i due numeri è: %d\n", prodotto);
        somma+=prodotto; 
       if (num1 == 0 || num2 == 0)
       {
           printf("Hai inserito un valore che corrisponde a 0");
       }
     } while (num1 != 0 && num2 != 0); // termina quando uno dei due valori C( uguale a zero (o entrambi i valori)
   
     printf("\nLa somma totale di tutti i prodotti è: %d",somma);
	
	return 0;
}