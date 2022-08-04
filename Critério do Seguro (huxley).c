#include <stdio.h>

int main (){

    int genero, idade;
    scanf("%d %d", &genero, &idade);

    if (genero == 0 && idade==1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}