#include<iostream>
using namespace std;

int main(){
	int tabla,multiplicacion;
	do{
		cout<<"Digite un numero: "; cin>>tabla;
	}while(tabla<1 || tabla>10);
	
	cout<<"Tabla del "<<tabla<<endl;
	for(int i=1;i<=10;i++){
		multiplicacion=tabla*i;
		cout<<tabla<<" x "<<i<<" = "<<multiplicacion<<endl;
	}
	return 0;
}
