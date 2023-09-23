#include <iostream>
#include <stdlib.h>
using namespace std;

//Definimos una funcion que compruebe si el numero es mayor
int mayor(int numero1, int numero2)
{
	//Comprueba que el numero 1 es mayor que el 2
  if(numero1>numero2){
    cout<<numero1<<" es mayor que "<<numero2<<endl;
  }
  //Si lo anterior es falso, Comprueba que el numero 2 es mayor que el 1
  else if (numero1 < numero2)
  {
    cout << numero2 << " es mayor que " << numero1<<endl;
  }
  return 0;
}

//Definimos una funcion que nos compruebe si son iguales los numeros
int iguales(int numero1, int numero2)
{
	//Nos comprueba si los dos numero son iguales
  if(numero1==numero2){
    cout<<"Los numero son iguales!!"<<endl;
  }
  return 0;
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
	//Enviamos los numero a las funciones para comprobar
  mayor(numero1,numero2);
  iguales(numero1, numero2);

  system("pause");
  return 0;
}
