#include <stdio.h>

int main() {
    printf("scrivi l'età dei 3 fratelli\n")
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int max = a;
    if (b > max)
    max = b;
    if (c > max)
    max = c;
    
    int min = a;
    if (b < min)
    min = b;
    if (c < min)
    min = c;
    
    printf("%d\n", max - min);
    return 0;
}
