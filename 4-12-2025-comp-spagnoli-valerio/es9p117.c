#include <stdio.h>
int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 <= n2 && n2 <= n3) {
        printf("I numeri sono in ordine crescente\n");
    } else {
        printf("I numeri non sono in ordine crescente\n");
    }
    return 0;
}
