#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<double> v(n);
    double somma=0;
    double massimo=-1e300, minimo=1e300;
    for(int i=0;i<n;i++){
        cin>>v[i];
        somma+=v[i];
        if(v[i]>massimo) massimo=v[i];
        if(v[i]<minimo) minimo=v[i];
    }
    double media = n? somma/n:0;
    double errore_assoluto=(massimo-minimo)/2.0;
    double errore_relativo = media? errore_assoluto/media:0;
    double errore_percentuale = errore_relativo*100.0;
    cout<<fixed<<setprecision(6)<<errore_assoluto<<" "<<errore_relativo<<" "<<errore_percentuale<<endl;
    return 0;
}