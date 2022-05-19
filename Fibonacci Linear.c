#include <stdio.h>

int main(){
    int i, fib = 0, n;

    do{
        printf("Entre com o valor de N: ");
        scanf("%d", &n);
        if(n < 0){ printf("\n Valor invalido!\n N nao pode ser negativo.\n"); }
    }while(n < 0);

    int v[n];

        for(i = 0; i <= n; i++){
            if(i == 0){
                v[0] = 0;
            }else if(i == 1){
                v[1] = 1;
            }else{
                fib = v[i-1] + v[i-2];
                v[i] = fib;
            }
        }

    printf("F[%d] = %d", n, fib);

    return 0;

}
