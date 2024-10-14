
/*Chiedere in input 5 interi e inserirli in un array.
Stampare a video l'array al contrario.
Esempio: 
input 5 6 9 11 12
output 12 11 9 6 5 */


#include <stdio.h>
#include <stdbool.h> 

int main(int argc, char *argv[]) {
    const int DIM=5;  
	int myVett[DIM]; 
	
	for(int i=0;i<DIM;i++)
	{
	
	j=i++;
	printf("Inserisci il %d° numero:",j);
	scanf("%d",myVett[i]);  
	
	}
	
	//invertiamo tutti i numeri presenti all'interno dell'array
	printf("Array invertito:"); 
	for(int i=DIM-1;i>=0;i--)
	{
		printf("\n"myVett[i]);
	}

	
	
	
	return 0; // Termina il programma
} 