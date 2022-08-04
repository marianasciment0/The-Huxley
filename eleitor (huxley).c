#include <stdio.h>

int main (){

    int idadeeleitor;
    scanf("%d", &idadeeleitor);

    if (idadeeleitor < 16){
        printf("nao eleitor\n");
    }
    else if (idadeeleitor >= 18 && idadeeleitor <= 65){
        printf("eleitor obrigatorio\n");
    }
    else if (idadeeleitor >= 16 && idadeeleitor < 18 || idadeeleitor > 65 ){
        printf ("eleitor facultativo\n");
    }

    return 0;
}