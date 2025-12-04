#include <stdio.h>

int main() {
    printf("inserisci la tua età")
    int eta;
    scanf("%d", &eta);
    
    if (eta >= 14) 
        printf("puoi guidare lo scooter 50cc\n");
    if (eta >= 16) 
        printf("puoi guidare la moto fino a 125cc\n");
    if (eta >= 18) 
        printf("puoi guidare l'auto fino a 95 cavalli\n");
    if (eta >= 21) 
        printf("puoi guidare qualsiasi auto o moto senza limitazioni\n");

    return 0;
}