#include<stdio.h>
int main(){
    float real, dolar, cotacao = 5.3;
    printf("Digite o valor em real: ");
    scanf("%f", &real);
    dolar = real / cotacao;
    printf("O valor em dolar é: %.2f", dolar);
    return 0;
}