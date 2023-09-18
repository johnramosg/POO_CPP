/* Escribe un programa que lea de la entrada estandar el precio de
   un producto y muestre en la salida estandar el precio del producto
   al aplicarle el IVA */

#include<iostream>
using namespace std;

int main(){
	int precio,porIVA,IVA=0,precioIVA=0; /*La variable porIVA almacena el porcentaje 
	del iva, la variable precioIVA almacena el precio mas el iva */
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	cout<<"Digite el porcentaje del IVA: ";
	cin>>porIVA;
	
	IVA=precio*(porIVA/100);//Calculamos el iva
	precioIVA=precio+IVA;//Le sumamos el iva al precio

	cout<<"El precio del producto mas el IVA es: "<<precioIVA<<endl;
	
	return 0;
}
