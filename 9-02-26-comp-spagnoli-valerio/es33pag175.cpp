#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long totale=0;
    for(int i=0;i<n;i++){
        string nome;
        int m;
        cin>>nome>>m;
        long long somma=0;
        for(int j=0;j<m;j++){
            long long abitanti;
            cin>>abitanti;
            somma+=abitanti;
        }
        totale+=somma;
        cout<<nome<<" "<<somma<<endl;
    }
    cout<<"totale "<<totale<<endl;
    return 0;
}