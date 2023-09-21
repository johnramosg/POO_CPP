#include "vector.h"
#include <iostream>
#include <string>
using namespace std;

Vector::Vector()
{
  vect.clear();
}

Vector::~Vector()
{
}

void Vector::construyeVector(int numeroDatos)
{
  int aux;
  for (int i = 0; i < numeroDatos; i++)
  {
    cout << "Digite el dato de la posicion [" << i << "] : ";
    cin >> aux;
    vect.push_back(aux);
  }
}

bool Vector::esVacio()
{
  bool aux = vect.empty();
  return aux;
}

void Vector::imprimirEsVacio(){
  if(Vector::esVacio()){
    cout << "El vector esta vacío"<<endl;
  }else{
    cout << "El no vector esta vacío" << endl;
  }
}

int Vector::tamagno()
{
  int aux = vect.size();
  return aux;
}



void Vector::imprimeVector()
{
  if (Vector::esVacio() == true )
  {
    cout << "El vector esta vacio" << endl;
    char aux;
    cout << "Deseas construir el vector? (s/n) ";
    cin>>aux;
    if(aux=='s'){
      int numeroDatos;
      cout << "Ingrese el numero de datos: ";
      cin >> numeroDatos;
      Vector::construyeVector(numeroDatos);
    }else if(aux=='n'){
      cout << "OK" << endl;
    }else{
      cout << "Opcion invalida" << endl;
    }
  }
  else
  {
    for (int elem : vect)
      cout << elem << " ";
    cout << endl;
  }
}

void Vector::agregarDato(int dato)
{
  vect.push_back(dato);
  cout << "Se agrego el dato " << dato << " al vect" << endl;
}

void Vector::intercambiarIndice(int a, int b)
{
  int aux = vect.at(a);
  vect.at(a) = vect.at(b);
  vect.at(b) = aux;
}

int Vector::sumarDatos()
{
  int s = 0;
  for (int elem : vect)
  {
    s += elem;
  }
  return s;
}

void Vector::burbuja()
{
  for (int i = 0; i < vect.size(); i++)
  {
    for (int j = 0; j < vect.size() - i + 1; j++)
    {
      if (vect[j] < vect[j + 1])
      {
        Vector::intercambiarIndice(j, j + 1);
      }
    }
  }
}

int Vector::mayor()
{
  if (Vector::esVacio() != true)
  {
    int mayor = 0;
    for (int i = 1; i < vect.size(); i++)
    {
      if (vect[i] > vect[mayor])
      {
        mayor = i;
      }
    }
    return vect[mayor];
  }
  return 0;
}

int Vector::menor()
{
  if (Vector::esVacio() != true)
  {
    int menor = 0;
    for (int i = 1; i < vect.size(); i++)
    {
      if (vect[i] < vect[menor])
      {
        menor = i;
      }
    }
    return vect[menor];
  }
  return 0;
}

int Vector::buscarIndiceDato(int indiceEntrada)
{
  int indice = 0;
  for (int elem : vect)
  {
    if (elem == indiceEntrada)
    {
      return indice;
      break;
    }
    else
    {
      indice++;
    }
  }
  return 0;
}

void Vector::borrarDatoEnPosicion(int a)
{
  if (a < 0 || a >= vect.size())
  {
    cout << "El rango del parametro es invalido" << endl;
  }
  else
  {
    vect.erase(vect.begin() + a - 1);
  }
}

void Vector::insertar(int dato, int posicion)
{
  if (posicion < 0 or posicion >= vect.size())
  {
    cout << "El rango del parametro es invalido" << endl;
  }
  else
  {
    vect.insert(vect.begin() + posicion, dato);
  }
}

void Vector::borrarDato()
{
  vect.pop_back();
}

void Vector::vaciar()
{
  vect.clear();
}