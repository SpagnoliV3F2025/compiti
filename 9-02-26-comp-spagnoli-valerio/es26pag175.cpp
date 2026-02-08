#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int somma=0;
    for(int i=0;i<n;i++) somma+=(2*i+1);
    cout<<somma<<endl;
    return 0;
}