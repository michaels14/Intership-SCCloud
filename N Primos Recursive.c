#include <stdio.h>
#include <math.h>

int nPrimos(int x);

int main(){
    int n;

    do{
        printf("Entre com o valor de N: ");
        scanf("%d", &n);
        if(n < 2){ printf("\n Valor invalido!\n N deve ser maior que 1.\n"); }
    }while(n < 2);


    printf("P[");
    nPrimos(n);
    printf("]");

}
int nPrimos(int x){
    int i, mult = 0;

    if(x == 2){
        printf(" %d ", x);
        return 0;
    }else{
        for(i = 2; i <= x ; i++){
            if(x%i == 0){ mult = mult + 1; }
        }
        if(mult <= 1){ printf(" %d ", x);}
        return nPrimos(x-1);
    }


}
