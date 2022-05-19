#include <stdio.h>

int fibonacci(int n){
    if(n == -1){
        return 0;
    }else if(n == 1 || n == 0){
        return 1;
    } else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main (){
    int n,i = 0;

    printf("Entre com o valor de N >= 0: ");
    do{
        scanf("%d", &n);
        if(n >= 0){
            printf(" F(%d) = %d ",n, fibonacci(n-1));
            i = 1;
        }else{
            printf("\nEntrada invalida, tente novamente: ");
            i = 0;
        }
    }while(i == 0);

return 0;
}
