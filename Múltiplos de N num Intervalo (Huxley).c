#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void multiplos(int a, int b, int n, int encontrados)
{
    if (a > b)
    {
        if (encontrados == 0) printf ("INEXISTENTE\n");
        return;
    }
    if (a % n == 0){
        printf("%d\n", a);
        encontrados ++;
    }
    
    multiplos (a + 1, b, n, encontrados);
}

int main() {
    int n,a,b;
    scanf("%d %d %d", &n, &a, &b);
    
    multiplos (a,b,n,0);
    
	return 0;
}