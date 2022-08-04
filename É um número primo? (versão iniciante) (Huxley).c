#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numprimo(int x, int y) 
{
    if(x < 2) 
    {
        return 0;
    }
    else if(x == 2) 
    {
        return 1;
    }
    else if(x % y == 0) 
    {
        return 0;
    }
    else if(y*y > x) 
    {
        return 1;
    }
    return numprimo(x, y+1);
}
int entrada()
{
    int n1;
    scanf("%d", &n1);
    
    if(n1 == -1)
    {
        return 0;
    }
    printf("%d\n", numprimo(n1, 2));
    entrada();
}

int main() 
{
    entrada();
    return 0;
}