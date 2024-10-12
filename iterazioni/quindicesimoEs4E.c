#include<stdio.h>
int main()
{
    int N, sommaPari=0,count=0;

    do {
        printf("Inserisci un numero positivo: ");
        scanf("%d", &N);
        
    } while (N <= 0); // Continua fino a quando i numeri non soddisfano la condizione
    
   
    do{
       //Controlla se il numero è pari. 
       if(count%2==0)
       {
        sommaPari+=count; 
       }
       
        count++; 
        
    }while(count<=N); 
     printf("La somma dei numeri pari è: %d ",sommaPari);
    
}