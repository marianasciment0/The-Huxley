#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtdlivros, qtdalunos, x;
    scanf ("%d %d", &qtdlivros, &qtdalunos);

    x = qtdalunos/qtdlivros;

    if (x<=8){
        printf("A");
    }
    else if (x>=9 && x<=12){
        printf("B");
    }
    else if (x>=13 && x<=18){
        printf("C");
    }
    else if (x > 18){
        printf("D");
    }
    
    return 0;
}