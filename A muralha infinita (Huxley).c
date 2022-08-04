#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int n, int moedas, char reino_passado, int x, int y)
{
    if (n == 0){
        printf("%d\n", moedas);
        return;
    }
    char movimento;
    scanf (" %c", &movimento);

    if (movimento == 'C') y++;
    else if (movimento == 'D') x++;

    if (reino_passado == 'b' && y < x) moedas ++;
    else if (reino_passado == 'v' && y > x) moedas ++;

    if (y < x) reino_passado = 'v';
    else if (y > x) reino_passado = 'b';

    loop(n - 1, moedas, reino_passado, x, y);
}

int main (void) {
    int n;
    scanf ("%d", &n);

    loop(n, 0,'?', 0, 0);

	return 0;
}