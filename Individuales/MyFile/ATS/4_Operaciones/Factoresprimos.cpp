#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	cout<<"Digite un numero: ";cin>>numero;
	
	cout<<"Descompocion en factores primos de "<<numero<<": ";
	for (int i=2;i>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero/=i;
		}
	}
	cout<<"\n";
	system("pause");
	return 0;
}

