#include<stdio.h>

int main(){
    float notas[4];
     
    printf("vetor notas[0]:%f"notas[0]);
    printf("vetor notas[1]:%f"notas[1]);
    printf("vetor notas[2]:%f"notas[2]);    
    printf("vetor notas[3]:%f"notas[3]);
    
    notas[0] = 10.5;
    notas[1] = 8.5;
    notas[2] = 7.0;
    notas[3] = 9.0;
    
    printf("vetor notas[0]:%.2f"notas[0]);
    printf("vetor notas[1]:%.2f"notas[1]);
    printf("vetor notas[2]:%.2f"notas[2]);    
    printf("vetor notas[3]:%.2f"notas[3]);
    
    float soma = 0;
    for(int i = 0; i < 4; i++){
        printf("vetor notas[%d]:%.2f\n", i, notas[i]);
        soma = soma + notas[i];
    }
    float media = soma / 4;
    printf("Media: %.2f\n", media);
    return 0;
}