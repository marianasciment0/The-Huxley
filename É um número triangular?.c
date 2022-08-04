#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num_triangular(int inicial, int n)
{
    int calculo = inicial * (inicial+1) * (inicial+2);
    if (calculo == n)
    {
        return inicial;
    }
    else if (calculo > n)
    {
        return 0;
    }
    else
    {
        return num_triangular (inicial +1, n);
    }
}

int main(){
    int triangular, resposta; 
    scanf ("%d", &triangular);

    resposta = num_triangular (1, triangular);

    if (resposta > 0)
    {
        printf ("%d * %d * %d = %d\n", resposta, resposta+1, resposta+2, triangular);
        printf("Verdadeiro\n");
    }
    else
    {
        printf ("Falso\n");
    }
    
    return 0;
}