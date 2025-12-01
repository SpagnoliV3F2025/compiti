#include <stdio.h>
#include <stdbool.h>

int main() {
    bool C1 = true;
    bool C2 = false;

    if (C1) {
        if (C2) {
            printf("Eseguo ISTR 2\n");
        } else {
            printf("Eseguo ISTR 1\n");
        }
    } else {
    }

    return 0;
}
