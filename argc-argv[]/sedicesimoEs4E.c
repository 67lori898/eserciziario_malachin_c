#include<stdio.h>
int main()
{
    int N1 =0 ,N2 = 0, addizioneRipetuta=0, count=0; 

    do {
        printf("Inserisci un numero positivo maggiore di 1: ");
        scanf("%d", &N1);
        
    } while (N1 < 1); // Continua fino a quando i numeri non soddisfano la condizione
    
    do {
        printf("\nInserisci un numero positivo maggiore di 1: ");
        scanf("%d", &N2);
        
    } while (N2 < 1);
   
     //Quando moltiplichiamo, stiamo essenzialmente sommando un numero a sè stesso più volte. 
     
     do
     {
        
        addizioneRipetuta+=addizioneRipetuta+N1;
          

     }while(count<=N2); 
     
     
     printf("La somma dei numeri pari è: %d ",sommaPari);
    
}