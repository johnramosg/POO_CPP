#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,mayor,n2;
	cout<<"Ingrese la cantidad de numeros del vector: ";
	cin>>n;
	int vector[n];
	
	for (int i=0;i<n;i++){
		cout<<"Digite un numero: ";cin>>vector[i];
		
		if(vector[i]>mayor){
			mayor=vector[i];
		}
	}
	
	cout<<"El mayor es: "<<mayor<<endl;
	
	system("pause");
	return 0;
}
