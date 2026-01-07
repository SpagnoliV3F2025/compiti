#include <stdio.h>
int main() {
    int raggio;
    double circonferenza, area;
    double pi = 3.141592653589793;
    for (raggio = 1; raggio <= 20; raggio++) {
        circonferenza = 2 * pi * raggio;
        area = pi * raggio * raggio;
        printf("Raggio: %d  Circonferenza: %.2f  Area: %.2f\n", raggio, circonferenza, area);
    }
    return 0;
}
