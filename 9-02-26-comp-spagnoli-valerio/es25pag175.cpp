#include <iostream>
using namespace std;
int main(){
    long long guadagno=0;
    long long paga=10;
    for(int i=0;i<22;i++){
        guadagno+=paga;
        paga*=2;
    }
    cout<<guadagno<<endl;
    return 0;
}