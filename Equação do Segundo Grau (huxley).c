#include <stdio.h>

int main (){

    double n1,n2,n3, delta;

    scanf ("%lf %lf %lf", &n1, &n2, &n3);

    delta = pow(n2,2) - 4 * n1 * n3;

    if (n1 == 0){
        printf ("NEESG\n");
    }
    else if (delta < 0){
        printf ("NRR\n");
    }
    else if (delta >= 0){
        
        double x1, x2;

        x1 = (-n2 + sqrt(delta))/(2*n1);
        x2 = (-n2 - sqrt(delta))/(2*n1);

        printf("%.2lf\n%.2lf\n", x1, x2);
    }
    return 0;
}