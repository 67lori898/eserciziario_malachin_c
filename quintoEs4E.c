/*Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.*/

#include <stdio.h>

int main()
{
    int num, a, b,totNum=0,sommaNum=0;
	float mediaNum;
	do
	{
		printf("Inserisci il valore di a\n");
		scanf("%d", &a);
		printf("Inserisci il valore di b\n");
		scanf("%d", &b);
	} while (b > a);//continua a chiederti il valore se b è maggiore di a
 
     do
     {
        printf("Inserisci un valore (compreso nell'intervalo A-B)");
        scanf("%d",&num);
        if(num<=a&&num>=b)
        {
            sommaNum+=num;
            totNum++;
        }

     }while(num<=a&&num>=b);
     mediaNum=(float)sommaNum/(float)totNum; 

     printf("La media totale dei numeri è: %f",mediaNum);
}