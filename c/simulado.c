#include <stdio.h>

// implemente uma função soma que recebe um vetor de valores do tipo float (vendas mensais) e seu tamanho e retorna a soma total das vendas
float soma(float vendas[], int n) {
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        total += vendas[i];
    }
    return total;
}

// implemente a função media, que recebe a soma total das vendas e a quantidade de meses e retorna a média mensal das vendas
float media(float total_vendas, int meses) {
    
    return total_vendas / meses;
}

// implemente a função menor_posiçao que recebe um vetor de valores do tipo float (vendas mensais) e seu tamanho , encontra o menor valor a função deve perimitir obter tanto o menor valor quanto a posição correspondente a esse valor
void menor_pos(float vendas[], int n, float *menor_valor, int *pos) {
    *menor_valor = vendas[0];
    *pos = 0;
    for (int i = 1; i < n; i++) {
        if (vendas[i] < *menor_valor) {
            *menor_valor = vendas[i];
            *pos = i;
        }
    }
}


int main(){
    float vendas[12] = {120.50, 150.75, 200.00, 175.25, 300.00, 250.50, 400.00, 350.75, 500.00, 450.25, 600.00, 550.50};
    int n = 12;
    float total_vendas = soma(vendas, n);
    float media_vendas = media(total_vendas, n);
    float menor_valor;
    int pos;
    

menor_pos(vendas, n, &menor_valor, &pos);

    // Exibindo os resultados(o print tem que estar igual a questão pede)
    printf("Soma = %.2f\n", total_vendas);
    printf("Menor valor = %.2f\n", menor_valor);
    printf("Pos =: %d\n", pos);
    printf("Média = %.2f\n", media_vendas);
    return 0;
}