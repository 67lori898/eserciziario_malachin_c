#include <stdio.h>
#include <string.h>

int main()
 {
             
             int N=0,count=0;  
             
             do 
             {
             printf("Inserisci un numero positivo: ");
             scanf("%d",&N); 
             }while(N<=0); //continua fino a che n non è positivo
             
             do
             {
                count++; 
                //Controllo se il numero è dispari e lo stampo a video.
                if(count%2==0)
                {
                    printf("\n%d",count);
                }
                
              
             }while(count<=N);
             
    return 0;
}