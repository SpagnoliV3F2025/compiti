#include <iostream>
using namespace std;
int main(){
    int a,b;
    long long prodotto=0;
    cin>>a>>b;
    int segno=1;
    if(b<0){ segno=-segno; b=-b; }
    if(a<0){ segno=-segno; a=-a; }
    for(int i=0;i<b;i++) prodotto+=a;
    cout<<(prodotto*segno)<<endl;
    return 0;
}