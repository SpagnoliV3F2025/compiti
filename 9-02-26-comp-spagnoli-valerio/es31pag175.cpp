#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    int giorni;
    cin>>giorni;
    int giorno_num;
    string giorno_sett;
    long long copie;
    long long somma=0;
    long long somma_domenica=0;
    int cont_domenica=0;
    long long max_copie=-1;
    int giorno_max=0;
    for(int i=0;i<giorni;i++){
        cin>>giorno_num>>giorno_sett>>copie;
        somma+=copie;
        if(copie>max_copie){ max_copie=copie; giorno_max=giorno_num; }
        if(giorno_sett=="domenica"||giorno_sett=="Domenica"){ somma_domenica+=copie; cont_domenica++; }
    }
    double media = giorni? (double)somma/giorni:0;
    double media_dom = cont_domenica? (double)somma_domenica/cont_domenica:0;
    cout<<giorno_max<<endl;
    cout<<fixed<<setprecision(2)<<media<<endl;
    cout<<fixed<<setprecision(2)<<media_dom<<endl;
    return 0;
}