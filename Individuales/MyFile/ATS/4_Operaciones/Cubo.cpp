#include <iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,opcion;
	//cout<<"Ingrese un numero: "; cin>>numero;
	cout<<"Menu"<<endl;
	cout<<"Que desea calcular"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Elija su opcion: ";cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Ingrese un numero: "; cin>>numero;
				numero*=numero*numero;
				cout<<"El cuadrado de el numero es: "<<numero;break;
		case 2:cout<<"Ingrese un numero: "; cin>>numero;
				if(numero%2==0){
					cout<<"El numero es par";break;
				}
				else{
					cout<<"El numero es impar";break;
				}
		case 3:break;
	}
	getch();
}
