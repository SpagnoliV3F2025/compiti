#include <iostream>
using namespace std;
int main(){
    int x;
    int precedente=0;
    bool primo=true;
    bool costante=true;
    int diff=0;
    int cont=0;
    while(cin>>x){
        if(x==999) break;
        cont++;
        if(primo){ precedente=x; primo=false; }
        else{
            int d=x-precedente;
            if(cont==2) diff=d;
            else if(d!=diff) costante=false;
            precedente=x;
        }
    }
    if(costante) cout<<"costante "<<cont<<endl; else cout<<"non costante "<<cont<<endl;
    return 0;
}