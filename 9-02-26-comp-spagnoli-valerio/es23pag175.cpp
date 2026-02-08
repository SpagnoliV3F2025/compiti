#include <iostream>
using namespace std;
int main(){
    long long x; int y;
    cin>>x>>y;
    long long risultato=1;
    int esponente = y<0? -y:y;
    for(int i=0;i<esponente;i++) risultato*=x;
    if(y<0) cout<<(1.0/risultato)<<endl; else cout<<risultato<<endl;
    return 0;
}