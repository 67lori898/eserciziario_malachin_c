#include<stdio.h>
int main()
{
    int n1=0, n2=0; 

    do {
        printf("Inserisci un numero positivo maggiore di 0: ");
        scanf("%d", &n1);
        
    } while (n1<=0); // Continua fino a quando i numeri non soddisfano la condizione
    
    do {
        printf("\nInserisci un numero positivo maggiore di 0: ");
        scanf("%d", &n2);
     } while (n1<=0);
   

    if(n1==(n2*n2))
    {
         printf("Il primo numero è il quadrato del secondo");
      }
    else
    {
         printf("Il primo numero è il quadrato del secondo"); 

    }
    
}