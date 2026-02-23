#include<stdio.h>
int main(){
    float real, dolar;
    printf("Digite o valor em real: ");
    scanf("%f", &real);
    dolar = real / 5.3;
    printf("O valor em dolar é: %.2f", dolar);
    return 0;
}