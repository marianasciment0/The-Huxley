#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){

    double r,a,x;
    scanf ("%lf", &r);

    x = r/100;
    a = (x * x) * 3.14159;

    printf ("Area = %.4f\n",a);

    return 0;
}