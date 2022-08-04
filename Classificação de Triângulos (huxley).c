#include <stdio.h>

int main(){

    double l1, l2, l3;

    scanf("%lf %lf %lf", &l1, &l2, &l3);

    if (l1>0 && l2>0 && l3>0){

        if (l1!=l2 && l1!=l3 && l2!=l3){
            printf("escaleno\n");
        }
        else if (l1!=l2 && l1==l3 || l1!=l3 && l1==l2 || l2==l3 && l2!=l1){
            printf("isosceles\n");
        }
        else{
            printf("equilatero\n");
        }
    }
     return 0;
}