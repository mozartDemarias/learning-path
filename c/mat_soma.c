#include <stdio.h>

int soma_matriz(int mat[3][3], int tamanho){
int soma = 0;
for (int i = 0; i < tamanho; i++){
    for (int j = 0; j < tamanho; j++){
            soma += mat[i][j];
        }
    }
    return soma;
}
int main(){
    int mat [3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%d", &mat[i][j]);
        }
    }
    int soma = soma_matriz(mat,3);
    printf("A soma dos elementos da matriz é: %d\n", soma);

    return 0;
}