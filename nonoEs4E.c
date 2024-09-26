#include <stdio.h>
#include <string.h>

int main()
 {
             
             int n=0, ris=0; 

             do 
             {
              
             printf("Inserisci un numero positivo: ");
             scanf("%d",&n); 
             }while(n<=0); //continua fino a che n non è positivo
             
             ris=n+1; 
             printf("Il successivo vale: %d", ris);
    return 0;
}
