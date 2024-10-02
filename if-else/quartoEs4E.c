#include <stdio.h>
#include <math.h>

int main(){
    float num;
    printf("Inserisci valore: ");
    scanf("%f", &num);

    printf("Radice di %.2f, vale: %.2f", num, sqrt(num));

    return 0;
}
/* Output:
Inserisci valore: 5
Radice di 5.00, vale: 2.24
*/