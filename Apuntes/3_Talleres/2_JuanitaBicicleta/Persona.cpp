#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

/*
nombre: Persona(string _nombre)
descripcion: Definir el constructor de Persona
retorno: (No aplica)
*/
Persona::Persona(string nombre)
{
  this->nombre = nombre;
  km = 0;
}

/*
nombre: ~Persona()
descripcion: Definir el destructor de Persona
retorno: (No aplica)
*/
Persona::~Persona()
{
}

/*
nombre: setNombre(string _nombre)
descripcion: Darle un valor al atributo nombre
retorno: (No aplica)
*/
void Persona::setNombre(string _nombre)
{
  nombre = _nombre;
}

/*
nombre: getNombre()
descripcion: Retornar el atributo nombre
retorno: (string)
*/
string Persona::getNombre()
{
  return nombre;
}

/*
nombre: getKm()
descripcion: Retornar el atributo Km
retorno: (int)
*/
int Persona::getKm()
{
  return km;
}

/*
nombre: setKm(int kmRecorridos)
descripcion: Darle un valor al atributo km
retorno: (No aplica)
*/
void Persona::setKm(int kmRecorridos)
{
  km += kmRecorridos;
}

/*
nombre: comprar()
descripcion: Decir que la Persona compro una bicicleta
retorno: (No aplica)
*/
void Persona::comprar()
{
  cout << nombre << " compró bicicleta nueva." << endl;
}

/*
nombre: prestar(Persona _nombrePersona)
descripcion: Decir que la Persona le presto su bicicleta a otra clase Persona
retorno: (No aplica)
*/
void Persona::prestar(Persona _nombrePersona)
{
  cout << nombre << " le presta su bicicleta a " << _nombrePersona.nombre << endl;
}

/*
nombre: devolver()
descripcion: Decir que la Persona devolvio la bicicleta
retorno: (No aplica)
*/
void Persona::devolver(Persona _nombrePersona)
{
  cout << nombre << " devuelve la bicicleta a " << _nombrePersona.nombre << endl;
}

/*
nombre: recorrer(int _km)
descripcion: recorrer los km y almacenar esos km en el atributo Persona
retorno: (No aplica)
*/
void Persona::recorrer(int _km)
{
  cout << nombre << " recorre " << _km << " km." << endl;
  Persona::setKm(_km);
}

/*
nombre: despinchar()
descripcion: Despinchar la Bicicleta de cierta Persona
retorno: (No aplica)
*/
void Persona::despinchar()
{
  cout << nombre << " tiene que despichar su bicicleta" << endl;
}
