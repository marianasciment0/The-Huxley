#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcular_fatorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * calcular_fatorial (x-1) ;
    }
}

int loop()
{
    int num;
    scanf("%d", &num);
    
    if(num != -1)
    {
        printf("%d\n", calcular_fatorial(num));
        loop();
    }
    else
    {
        return 0;
    }
}

int main(){
    
    loop();
    
    return 0;
}