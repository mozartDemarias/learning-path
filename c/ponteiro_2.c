#include<stdio.h>

// Criar uma função que soma 10 num valor decimal passado como parametro
// Se o valor for negativo, retorne 0

float somar10_por_valor(float numero_valor){
    if(numero_valor >= 0){
        numero_valor = numero_valor +10;

    }else{    
        numero_valor = 0;
    }
    return numero_valor;

}

void somar10_por_referencia(float* p_numero){
    if(*p_numero >= 0){
        *p_numero = *p_numero +10;

    }else{    
        *p_numero = 0;
    }
}

int main(){
    float numero;
    
    numero = somar10_por_valor(numero);

    somar10_por_referencia(&numero);

    printf("Insira um numero decimal: ");
    scanf("%f",&numero);


    if(numero >= 0){
        numero = numero +10;

    }else{    
        numero = 0;
    }

    printf("Numero: %.2f\n", numero);
    return 0;   
}