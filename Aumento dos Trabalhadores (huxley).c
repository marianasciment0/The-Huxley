#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double sal, aume;
    scanf ("%lf", &sal);

    if (sal>=500){
        aume = (sal*0.10) + sal;
        printf("%.2lf\n",aume);
    }
    else if (sal>=300 && sal < 500){
        aume = (sal*0.07) + sal;
        printf("%.2lf\n",aume);
    }
    else if (sal <300){
        aume = (sal*0.05) + sal;
        printf("%.2lf\n",aume);
    }
    
	return 0;
}