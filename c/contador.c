#include<stdio.h>

int main(){
    int n, i;

    n = 3;
    i = 0;
    // for (i = 0; i <= n; i++){
    //     printf("contagem: %d\n", i);
    while(i <= n){
        printf("contagem: %d\n", i);
        i++;
    }
    printf("Fim da contagem\n");


    return 0;
}