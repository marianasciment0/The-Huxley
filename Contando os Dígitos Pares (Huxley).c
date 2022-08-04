#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ContaDigitosPares(int x){
  int cont, y = 0;
  
    if (x <= 0)
    {
        return 0;
    }
 	else
    {
    cont = x%10;
    x = x/10;
    y += ContaDigitosPares(x); 
      
    if(cont % 2 == 0)
    {
      y++;
    }
      
    return y;
    }
  }

int main(){
  int num;
    
  scanf("%d", &num);
  printf("%d", ContaDigitosPares(num));
    
return 0;
}