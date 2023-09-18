#include <iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,conteo=0;
	do{
		cout<<"Digite un numero: ";cin>>numero;
		if(numero>0){
			conteo++;
		}
	}while(numero!=0);
	
	cout<<"La cantidad de numeros mayores que 0 ingresados es: "<<conteo;
	
	getch();
	return 0;
}
