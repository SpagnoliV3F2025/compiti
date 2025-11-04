#include <stdio.h>
#include <string.h>

float AREA = 0.0;
char FIGURA[20] = "";

void stampa() {
    printf("Area del %s = %.2f\n", FIGURA, AREA);
}

void triangolo() {
    float base, altezza;
    printf("Inserisci base: ");
    scanf("%f", &base);
    printf("Inserisci altezza: ");
    scanf("%f", &altezza);
    
    strcpy(FIGURA, "TRIANGOLO");
    AREA = (base * altezza) / 2.0;
}

void quadrato() {
    float lato;
    printf("Inserisci lato: ");
    scanf("%f", &lato);
    
    strcpy(FIGURA, "QUADRATO");
    AREA = lato * lato;
}

void rettangolo() {
    float base, altezza;
    printf("Inserisci base: ");
    scanf("%f", &base);
    printf("Inserisci altezza: ");
    scanf("%f", &altezza);
    
    strcpy(FIGURA, "RETTANGOLO");
    AREA = base * altezza;
}

void rombo() {
    float diagmin, diagmag;
    printf("Inserisci diagonale minore: ");
    scanf("%f", &diagmin);
    printf("Inserisci diagonale maggiore: ");
    scanf("%f", &diagmag);
    
    strcpy(FIGURA, "ROMBO");
    AREA = (diagmin * diagmag) / 2.0;
}

void menu() {
    printf("MENU\n");
    printf("1 TRIANGOLO\n");
    printf("2 QUADRATO\n");
    printf("3 RETTANGOLO\n");
    printf("4 ROMBO\n");
    printf("5 STAMPA\n");
    printf("Inserisci la scelta: ");
}

int main() {
    int scelta;
    
    do {
        menu();
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                triangolo();
                stampa();
                break;
            case 2:
                quadrato();
                stampa();
                break;
            case 3:
                rettangolo();
                stampa();
                break;
            case 4:
                rombo();
                stampa();
                break;
            case 5:
                stampa();
                break;
            default:
                printf("Scelta non valida.\n");
                break;
        }

    } while (scelta != 5);

    return 0;
}