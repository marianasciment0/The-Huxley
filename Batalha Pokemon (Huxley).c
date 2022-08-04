#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int batalha (int turno, int dano_clodes,int vida_bezaliel, int num_dano)
{
    if (num_dano == turno) return 0;
    
    if ((turno - num_dano) * (dano_clodes + 50 * num_dano) >= vida_bezaliel) return 1;
    
    return batalha (turno, dano_clodes, vida_bezaliel, num_dano + 1);
}
void loop (int x)
{
    if (x == 0) return;

    int vida_clodes, vida_bezaliel, dano_clodes, dano_bezaliel;
    scanf ("%d %d %d %d", &vida_clodes, &vida_bezaliel, &dano_clodes, &dano_bezaliel);
    
    int eh_possivel = batalha(ceil((double) vida_clodes/dano_bezaliel), dano_clodes, vida_bezaliel, 0);

    if(eh_possivel == 1) printf("Clodes\n");
    else printf ("Bezaliel\n");

    loop (x - 1);
}
int main()
{
    int numero;
    scanf("%d", &numero);

    loop (numero);
    return 0;
}