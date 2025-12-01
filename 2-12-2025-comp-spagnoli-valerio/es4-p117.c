#include <stdio.h>

int main() {
    float ore;
    int scelta;

    printf("Inserisci il numero di ore: ");
    scanf("%f", &ore);

    printf("Scegli conversione:\n1. In minuti\n2. In secondi\nScelta: ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("%.2f ore corrispondono a %.2f minuti.\n", ore, ore * 60);
    } else if (scelta == 2) {
        printf("%.2f ore corrispondono a %.2f secondi.\n", ore, ore * 3600);
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}
