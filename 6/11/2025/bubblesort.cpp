#include <iostream>
using namespace std;

int main() {
    int dimensione;
    if (!(cin >> dimensione)) return 0;

    int* valori = new int[dimensione];
    for (int indice = 0; indice < dimensione; ++indice) {
        cin >> valori[indice];
    }

    for (int passata = 0; passata < dimensione; ++passata) {
        bool nessunoscambio = true;
        for (int posizione = 1; posizione < dimensione - passata; ++posizione) {
            if (valori[posizione - 1] > valori[posizione]) {
                int temporaneo = valori[posizione - 1];
                valori[posizione - 1] = valori[posizione];
                valori[posizione] = temporaneo;
                nessunoscambio = false;
            }
        }
        if (nessunoscambio) break;
    }

    for (int indice = 0; indice < dimensione; ++indice) {
        if (indice) cout << ' ';
        cout << valori[indice];
    }
    cout << '\n';

    delete[] valori;
    return 0;
}