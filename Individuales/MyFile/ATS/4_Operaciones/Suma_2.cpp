#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,suma;
	cout<<"Ingrese un numero: ";cin>>numero;
	for(int i=1;i<=numero;i++){
		
	
		suma+=(2*i-1);
		
		cout<<suma<<endl;
	}
	
	
	
	getch();
	return 0;
}
