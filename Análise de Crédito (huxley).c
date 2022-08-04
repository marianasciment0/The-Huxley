#include <stdio.h>

int main (){

    double sala, valorcomp, limite, parcela;
    scanf("%lf %lf", &sala, &valorcomp);

    limite = (sala*0.30);

    if (valorcomp<limite){
        parcela = limite - valorcomp;
        printf("%.2lf", parcela);
    }
    else if (valorcomp>limite){
        printf("0.00");
    }
    return 0;
}