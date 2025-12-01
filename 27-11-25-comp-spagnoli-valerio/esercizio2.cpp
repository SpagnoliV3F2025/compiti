#include <iostream>
using namespace std;
int main() {
const int quotafissa=100;
const int 1sett=600;
const int 2sett=1100;
const int supplementocoperte=20;
int nsett=0;
int risposta;
cout<<"per quante settimane vuoi restare? (1 o 2)";
do{
cin>>nsett;
if(nsett!=1 or nsett!=2)
cout>>"il valore puo essere solo 1 o 2,riprova"
else {
    do{
    cout<<"desideri una coperta aggiuntiva al prezzo di 20 euro? (1 per dire si o 0 per dire no)"
    cin>>risposta
    if(risposta!=1 or risposta!=0)
    cout>>"la risposta puo essere solo 1 o 0"
    }while (risposta!=1 or risposta!=0)
}
} while (nsett!=1 or nsett!=2)
switch(nsett){
case 1:
somma1= 1sett+quotafissa;
if(risposta=1)
somma1= 1sett+quotafissa+supplementocoperte;
else
somma1= 1sett+quotafissa;
break;
case 2:
if(risposta=1)
somma1= 2sett+quotafissa+supplementocoperte;
else
somma1= 2sett+quotafissa;
break;
}
cout<<somma1
} 
