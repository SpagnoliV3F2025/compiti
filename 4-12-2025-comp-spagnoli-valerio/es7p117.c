#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n >= -5 && n <= 10) {
        printf("Il dato e fuori dall'intervallo\n");
    } else {
        printf("OK\n");
    }
    return 0;
}
