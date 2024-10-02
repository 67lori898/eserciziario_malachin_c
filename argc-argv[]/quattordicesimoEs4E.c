#include<stdio.h>
int main()
{
    int num1 = 0, num2 = 0,myNum, count = 0;


    do {
        printf("Inserisci un numero positivo: ");
        scanf("%d", &num1);
        
    } while (num1 <= 0); // Continua fino a quando i numeri non soddisfano la condizione
    num2=-(num1); //i numeri devono essere compreso tra l'intervallo -N ed N.
   
    count=-num1; //count assume il valore di num1 (inizio dell'intervallo)
   
    do{
        
        printf("\n%d",count);
        count++; 
        
    }while(count>=num2&&count<=num1); 

    
}