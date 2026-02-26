#include<stdio.h>
int main(){ 
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f", imc);
    if (imc < 18.5) {
        printf("Você está abaixo do peso.");
    } else if (imc < 25) {
        printf("Você está com peso normal.");
    } else {
        printf("Você está acima do peso.");
    }
        
    return 0;   
}