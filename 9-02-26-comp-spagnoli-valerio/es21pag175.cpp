#include <iostream>
using namespace std;
int main(){
    int x,y;
    int cont=0;
    while(true){
        cin>>x>>y;
        cont++;
        if(x==y){ cout<<"uguali "<<cont<<endl; break; }
        if(y>x){ cout<<"secondo maggiore "<<cont<<endl; break; }
    }
    return 0;
}