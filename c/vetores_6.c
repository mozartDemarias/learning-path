#include<stdio.h>
// Crie um vetor com 7 posições
// leia os valores numericos do usuario e preencha o veotr
// imprima os valores do vetor e suas respectivas posições



int main(){
    int n = 7;
    int v[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("Valores do vetor e suas respectivas posições:\n");
    for(int i = 0; i < n; i++){
        printf("Posição %d: %d\n", i, v[i]);
    }
    return 0;

}