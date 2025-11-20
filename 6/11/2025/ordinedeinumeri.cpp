#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int i,e,s;
	for(i=0;i<10;i++){
		cin>>arr[i];
	}
	for(s=0;s<10;s++){
		cout<<"non in ordine2";
		for(e=0;e<10;e++){
			cout<<"non in ordine3";
			if(arr[e]>arr[e++]){
			cout<<"non in ordine4";
			return 1;
			}
			
		}
	}
}
