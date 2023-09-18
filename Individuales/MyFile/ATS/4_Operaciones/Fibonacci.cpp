#include<iostream>
using namespace std;

int main(){
	int serie=0,n,x=0,y=1;
	cout<<"Digite el valor que desea: ";cin>>n;
	cout<<"1 ";
	for(int i=1;i<n;i++){
		serie=x+y;
		cout<<serie<<" ";
		x=y;
		y=serie;
	}
	
}
