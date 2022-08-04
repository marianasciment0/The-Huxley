#include <stdio.h>

int divisivel(int x, int n, int contador)
{    
    if (n > x) 
    { 
        return contador;
    } 
    if (x % n == 0) 
    { 
        return divisivel (x, n+3, contador +1); 
    } 
    else 
    { 
        return divisivel (x, n+3, contador); 
    }
}
int main()
{
    int num, calculo;

    scanf ("%d", &num);
    calculo = divisivel (num, 3, 0); 
    if (calculo == 0) 
    { 
        printf("O numero nao possui divisores multiplos de 3!"); 
    } 
    else
    {
        printf("%d\n", calculo);
    }
}