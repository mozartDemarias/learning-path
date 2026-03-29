#include<stdio.h>

int main(){

    int v[4] = {5, 10, 2, 1};
    
    int m [2] [2] = {
            {5,10},
            {2,1}
    };
    for(int i = 0; i< 4;i++){
        printf("O elemento do vetor v igural a %d: %d\n", v[i], v[i]);
    }

    printf("\n");
    
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("O elemento da matriz m[%d][%d] igual a %d\n", i, j, m[i][j]);
        }
    }

    printf("\n");
    // crie uma matriz que vai conter o quadrado de cada elemento da matriz m
    int m2 [2] [2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            m2[i][j] = m[i][j] * m[i][j];
            printf("O elemento da matriz m2[%d][%d] igual a %d\n", i, j , m2[i][j]);
        }
    }
    
    return 0;
}