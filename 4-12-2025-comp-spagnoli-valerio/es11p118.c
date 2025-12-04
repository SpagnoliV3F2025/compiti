#include <stdio.h>

int main() {
    printf("inserisci A e B per trovare la X dell'equazione ax+b=0\n");
    float a, b;
    scanf("%f %f", &a, &b);
    
    if (a == 0) {
        if (b == 0)
            printf("la soluzione sono tutti i numeri reali\n");
        else
            printf("nessuna soluzione\n");
    } else {
        double x = (b*-2) / a;
        printf("la soluzione è x = %f\n", x);
    }
    
    return 0;
}