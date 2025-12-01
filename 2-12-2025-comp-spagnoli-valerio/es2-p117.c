#include <stdio.h>

int main() {
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    printf("Numeri in ordine crescente: ");
    if (a < b)
        printf("%d, %d\n", a, b);
    else
        printf("%d, %d\n", b, a);

    return 0;
}
