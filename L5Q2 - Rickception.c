#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rick (int r, int contador, int t)
{
    if (contador == t)
    {
        return r;
    }
    else
    {
        if (contador%2 == 0)
        {
            return  rick(r+3, contador+1, t);
        }
        else
        {
            return rick(r +(r%5), contador+1, t);
        }
    }
}

int main()
{
    int n, t, resposta;
    scanf ("%d %d", &n, &t);
    
    resposta = rick(n, 0, t);

    printf ("%d\n", resposta);
    return 0;
}
