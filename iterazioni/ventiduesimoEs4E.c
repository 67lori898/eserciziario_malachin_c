



#include <stdio.h>

int main(int argc, char *argv[])
{

	int n, i, somma;
	do
	{
		printf("Inserisci un numero positivo: \n");
		scanf("%d", &n);

	} while (n < 0);
      
	  printf("Le coppie che sommate danno %d, sono:",n); 
      for(int i=0; i<n; i++)
	  {
      for(int=j+1; j<n; j++)
	  {
		//controlla se la somma tra i 2 numeri è uguale ad n
           if(j+i==n)
		   {
			printf("{%d,%d}",i,j); 
		   }
     }

   }
}
