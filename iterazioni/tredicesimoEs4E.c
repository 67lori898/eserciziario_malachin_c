#include<stdio.h>
int main()
{
    int num1 = 0, num2 = 0,myNum, count = 0;


    do {
        printf("Inserisci il primo numero positivo: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero positivo: ");
        scanf("%d", &num2);
    } while (num1 >= num2 || num1 <= 0 || num2 <= 0); // Continua fino a quando i numeri non soddisfano la condizione
    count=num1; //count assume il valore di num1 (inizio dell'intervallo)
    do{
        
        printf("\n%d",count);
        count++; 
        
    }while(count>=num1&&count<=num2); 

    
}