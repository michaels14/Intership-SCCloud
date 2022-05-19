#include <stdio.h>

int main(){
    int i, j, n, mult;

     do{
        printf("Entre com o valor de N: ");
        scanf("%d", &n);
        if(n < 2){ printf("\n Valor invalido!\n N deve ser maior que 1.\n"); }
    }while(n < 2);
    int v[n];

    printf("P(%d) = [", n);
    for(i = 2; i <= n; i++){
        mult = 0;
        for(j = 2; j <= i; j ++){
            if(i%j == 0){
                mult = mult+1;
            }
        }
        if(mult <= 1){
                printf(" %d ", i);
        }
    }
    printf("]");

}
