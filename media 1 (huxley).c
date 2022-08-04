#include <stdio.h>

int main(){

    double n1,n2,p1,p2,m;
    scanf ("%lf", &n1);
    scanf ("%lf", &n2);

    p1 = n1*3.5;
    p2 = n2*7.5;
    m = (p1+p2)/11;

    printf("MEDIA = %.5lf\n", m);

     return 0;
}