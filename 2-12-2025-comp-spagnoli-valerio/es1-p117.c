#include <stdio.h>

int main() {
    float n;
    printf("Inserisci un numero: ");
    scanf("%f", &n);

    if (n > 0)
        printf("Il numero e' positivo.\n");
    else if (n < 0)
        printf("Il numero e' negativo.\n");
    else
        printf("Il numero e' zero.\n");

    return 0;
}
