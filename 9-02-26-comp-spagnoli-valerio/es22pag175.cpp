#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    long long aa=a, bb=b;
    if(bb==0) return 0;
    bool negativo = (aa<0) ^ (bb<0);
    if(aa<0) aa=-aa;
    if(bb<0) bb=-bb;
    long long quoziente=0;
    while(aa>=bb){ aa-=bb; quoziente++; }
    if(negativo) quoziente=-quoziente;
    int resto=(int)aa;
    cout<<quoziente<<" "<<resto<<endl;
    return 0;
}