#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double s, v_a, ns;
    scanf("%lf",&s);
    
    if(s<=280){
         
        v_a = s * 0.2;
        ns = s + v_a;
        printf("%.2lf\n20\n%.2lf\n%2.2lf",s, v_a, ns);
    }
    
    else if(s>280 && s <700){
         
        v_a = s * 0.15;
        ns = s + v_a;
        printf("%.2lf\n15\n%.2lf\n%2.2lf",s, v_a, ns);
    }
    
    else if(s>=700 && s <1500){
         
        v_a = s * 0.1;
        ns = s + v_a;
        printf("%.2lf\n10\n%.2lf\n%2.2lf",s, v_a, ns);
    }
    
    else if(s>=1500){
         
        v_a = s * 0.05;
        ns = s + v_a;
        printf("%.2lf\n5\n%.2lf\n%2.2lf",s, v_a, ns);
    }
	return 0;
}