#include <stdio.h>
int main() {
    int x, y;
    int i;
    int numero;
    int somma = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    for (i = 1; i <= x; i++) {
        numero = y + i;
        somma = somma + numero * numero;
    }
    printf("%d\n", somma);

    return 0;
}
