/*
Autor: John Jaider Ramos Gaviria
Correo: ramos.john@correounivalle.edu.co
Fecha creación: 2023-09-18
Fecha última modificación: 2023-09-18
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

//Definimos una funcion que compruebe si el numero es mayor
int comprobar(int numero1, int numero2)
{
	//Comprueba que el numero 1 es mayor que el 2
  if(numero1>numero2){
    cout<<"El numero mayor es: "<<numero1<<endl;
	}
  //Si lo anterior es falso, Comprueba que el numero 2 es mayor que el 1
  else if (numero1 < numero2){
    cout<<"El numero mayor es: "<<numero2<<endl;
	}
  	//Nos comprueba si los dos numero son iguales
  else if(numero1==numero2){
  	cout<<"Los numeros son iguales"<<endl;
	}
}

//Definimos la funcion principal
int main()
{
	//Pedimos dos numeros en la entrada
  int numero1, numero2;
  cout << "Digite un numero: ";
  cin >> numero1;
  cout << "Digite un numero: ";
  cin >> numero2;
	//Enviamos los numero a la funcion para comprobar
  comprobar(numero1,numero2);

  system("pause");
  return 0;
}
