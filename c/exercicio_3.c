#include<stdio.h>
int main(){
    int n, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    i = 0;

    for(i = 0; i <= n; i++){
        printf("contagem: %d\n", i);
    }
}