#include<iostream>
using namespace std;

int main(){
	int numero_1,numero_2,suma=0,resta=0,multiplicacion=0,division=0;
	
	cout<<"Digite un numero: ";cin>>numero_1;
	cout<<"Digite un numero: ";cin>>numero_2;
	
	suma=numero_1+numero_2;
	resta=numero_1-numero_2;
	multiplicacion=numero_1*numero_2;
	division=numero_1/numero_2;
	
	cout<<"Suma: "<<suma<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<"Multiplicacion: "<<multiplicacion<<endl;
	cout<<"Division: "<<division<<endl;
	
	
	
	return 0;
}
