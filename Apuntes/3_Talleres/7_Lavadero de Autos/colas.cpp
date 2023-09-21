#include "colas.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;

/*
Nombre: Cola
Funcion: Constructor
Retorno: No aplica
*/
Cola::Cola()
{
}
/*
Nombre: ~Cola
Funcion: Destructor
Retorno: No aplica
*/
Cola::~Cola()
{
}

/*
Nombre: entrarAuto => string placa
Funcion: Ingresar un auto a la cola
Retorno: No aplica
*/
void Cola::entrarAuto(string placa)
{
  cola.push(placa);
  cout << "El auto ingreso correctamente" << endl;
}

/*
Nombre: sacarAuto
Funcion: Sacar un auto de la cola (el primero en entrar)
Retorno: No aplica
*/
void Cola::sacarAuto()
{
  cola.pop();
  cout << "El auto se entrego a su dueño" << endl;
}

/*
Nombre: mostrarAutos
Funcion: mostrar todos los elementos (placas) de la cola
Retorno: No aplica
*/
void Cola::mostrarAutos()
{
  string aux;

  for (int i = 0; i < cola.size(); i++)
  {
    aux = cola.front();
    cola.pop();
    cout << aux << ", ";
    cola.push(aux);
  }
  cout << endl;
}

/*
Nombre: proximoAuto
Funcion: mostrar el front de la cola, el proximo carro a lavar
Retorno: No aplica
*/
void Cola::proximoAuto()
{
  cout << "Proximo auto a lavar: " << cola.front() << endl;
}