#include<stdio.h>
int main(){ 
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Voce esta abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Voce esta com peso normal.\n");
    } else {
        printf("Voce esta acima do peso.\n");
    }
        
    return 0;   
}