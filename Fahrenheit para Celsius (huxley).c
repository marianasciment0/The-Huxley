#include <stdio.h>

int main (){

    double t,f;
    scanf ("%lf", &t);

    f = (t-32)/1.8;

    printf ("%.2f\n",f);

    return 0;
}