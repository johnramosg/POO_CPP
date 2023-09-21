#include <stack>
#include <iostream>
#include "pila.h"
using namespace std;

/*
Nombre: Pila
Funcion: Constructor
Retorno: No aplica
*/

Pila::Pila()
{

}

/*
Nombre: ~Pila
Funcion: Destructor
Retorno: No aplica
*/
Pila::~Pila()
{
}

/*
Nombre: apilar => int numero
Funcion: Apilar con numero
Retorno: No aplica
*/
// APILAR
void Pila::apilar(int numero)
{
  pila.push(numero);
  cout << "El numero: " << numero << " se apilo" << endl;
}

/*
Nombre: desapilar
Funcion: Desapilar con numero
Retorno: No aplica
*/
// DESAPILAR
void Pila::desapilar()
{
  pila.pop();
}

/*
Nombre: mostrarElemento
Funcion: mostrar el top de la pila
Retorno: No aplica
*/
void Pila::mostrarElemento()
{
  int top = pila.top();
  cout << top << endl;
}

/*
Nombre: tamagno
Funcion: ver el tamaño de la pila
Retorno: dato de tipo int
*/
int Pila::tamagno()
{
  int aux = pila.size();
  return aux;
}

/*
Nombre: desapilarConCondicion => int numero
Funcion:desapilar un numero si es par
Retorno: No aplica
*/
void Pila::desapilarConCondicion(int numero)
{
  if (numero % 2 == 0)
  {
    pila.pop();
    cout << "El numero se desapilo" << endl;
    cout << "Tamaño pila: " << Pila::tamagno() << endl;
  }
  else
  {
    cout << "El numero NO se desapilo" << endl;
    cout << "Tamaño pila: " << Pila::tamagno() << endl;
  }
}