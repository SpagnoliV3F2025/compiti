#include <iostream>
using namespace std;
int main() {
    const int limite = 20;
    const double percentuale = 2;
    double pesobagaglio;
    double prezzoiniziale;
    double kgextra = 0.0;
    cout << "inserisci il peso del bagaglio: ";
    cin >> pesobagaglio;
    cout << "inserisci la tariffa del biglietto: ";
    cin >> prezzoiniziale;
    if (pesobagaglio > limite)
    kgextra = pesobagaglio - limite;
    double aggiuntaprezzo = kgextra * percentuale * prezzoiniziale / 100.0;
    double totale = prezzoiniziale + aggiuntaprezzo;
    cout << "prezzo totale: " << totale << endl;
    return 0;
}