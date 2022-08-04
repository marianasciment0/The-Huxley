#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){

    int numero1, numero2;

    scanf("%d %d", &numero1, &numero2);

    if (numero1>numero2){
        printf("%d %d", numero2,numero1);
    }
    else {
        printf("%d %d", numero1,numero2);
    }

 return 0;
}