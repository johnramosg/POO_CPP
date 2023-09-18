#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros del vector: ";
	cin>>n;
	int vector[n-1];
	for (int i=0;i<n;i++){
		cout<<"Ingrese el "<<i+1<<" Numero: ";
		cin>>vector[i];
		
	}
	for (int j=n;j>0;j--){
		cout<<j-1<<"->"<<vector[j-1]<<endl;
	}
	
	system("pause");
	return 0;
}
