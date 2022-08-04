#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cafe(int quant, int contador)
{   
    int quantcaixas;
    char tamanho;
    scanf (" %d", &quantcaixas);
    scanf (" %c", &tamanho);

    if (contador == 7)
    {
        printf ("%d\n", quant);
        printf ("%d", (quant*2)/7);
    }

    if (tamanho =='g' || tamanho == 'G')
    {   
        quant = quant + (quantcaixas * 16);
        contador = contador +1;
        cafe (quant, contador);
    }
    else if (tamanho =='p' || tamanho == 'P')
    {   
        quant = quant + (quantcaixas * 10);
        contador = contador +1;
        cafe (quant, contador);
    }
}
int main ()
{
    cafe (0,0);
    return 0;
}