#include <stdio.h>

int main (){

    int consumo, valor;
	scanf("%d", &consumo);

	if(consumo <= 10){
		valor = 7;
	} 
	else if (consumo>=11 && consumo<=30){
		valor = (consumo-10) * 1 + 7;
	} 
	else if (consumo>=31 && consumo<=100){
		valor = (consumo-30) * 2 + 27;
	} 
	else if (consumo>=101 && consumo<=120){
		valor = (consumo-100) * 5 + 167;
	}
	
	printf("%d\n", valor);
    return 0;
}