#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc_mdc(int x, int y) {
    int r = x % d;
    
    if (r == 0)
        return y;
    
    return calc_mdc(y, r);
}

int entrada(int n) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("MDC(%d,%d) = %d\n",a,b, calc_mdc(a, b));
    
    if(n <= 1)
        return 0; 
    
    entrada(n-1);
}

int main() {
    
    int num;
    scanf("%d", &num);
    
    entrada(num);

    return 0;
}