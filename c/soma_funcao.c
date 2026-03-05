#include<stdio.h>
float somar (float n1, float n2){
    float soma = n1 + n2;
    return n1 + n2;
}

void imprimir_encerramento(){
printf("Programa encerrado.\n");
}

int main(){ 
    float n1, n2;
   
    n1 = 10.5;
    n2 = 5;

    printf("soma igaual a: %.2f\n", somar(n1, n2));
    
    n1 = 5.5;
    n2 = 20;
    printf("soma igaual a: %.2f\n", somar(n1, n2));

    imprimir_encerramento();
    
    return 0;
}