#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    double m;

    scanf("%d %d %d", &nota1, &nota2, &nota3);

    m = (double) (nota1 + nota2 + nota3)/3;

    if (m >= 70 && m <= 100){
        printf ("a media do aluno foi %.2lf e ele foi APROVADO\n", m);
    }
    else if (m >=0 && m <= 40){
        printf ("a media do aluno foi %.2lf e ele foi REPROVADO\n", m);
    }
    else if (m >= 40 && m < 70){
        printf ("a media do aluno foi %.2lf e ele foi FINAL\n", m);
    }
    else{
        printf("Media Invalida\n");
    }
    
        return 0;
}