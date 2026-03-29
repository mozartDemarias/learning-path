#include<stdio.h>

int main(){
    float m[3][3] = {
        {2, 5, 7},
        {10, 8, 3},
        {1, 6, 4}
    };
    // imprimir a soma da diagonal principalde m
    float soma = 0;
    for(int i = 0; i < 3; i++){
        soma += m[i][i];
    }
    printf("A soma da diagonal principal de m é: %f\n", soma);


    return 0;
}