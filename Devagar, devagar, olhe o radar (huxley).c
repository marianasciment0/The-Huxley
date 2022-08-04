#include <stdio.h>

int main (){

    float velocidadevia, velocidadeveic;

    scanf("%f %f", &velocidadevia, &velocidadeveic);

    if (velocidadeveic>velocidadevia && velocidadeveic<=(0.2*velocidadevia+velocidadevia)){
        printf("85.13\n4");
    }
    else if (0.2*velocidadevia+velocidadevia<velocidadeveic && velocidadeveic<=(0.5*velocidadevia+velocidadevia)){
        printf("127.69\n5");
    }
    else if (velocidadeveic>(0.5*velocidadevia*velocidadevia)){
        printf("574.62\n7");
    }
    else if (velocidadeveic<=velocidadevia){
        printf("0.00\n0");
    }
    return 0;
}