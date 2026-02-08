#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int iscritti,votanti,schede_nulle,schede_bianche;
        cin>>iscritti>>votanti>>schede_nulle>>schede_bianche;
        double perc_votanti = iscritti? (100.0*votanti/iscritti) : 0.0;
        double perc_bianche = votanti? (100.0*schede_bianche/votanti) : 0.0;
        double perc_nulle = votanti? (100.0*schede_nulle/votanti) : 0.0;
        cout<<fixed<<setprecision(2)<<perc_votanti<<" "<<perc_bianche<<" "<<perc_nulle<<endl;
    }
    return 0;
}