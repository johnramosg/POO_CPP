#include "espectador.h"
#include <iostream>

Espectador::Espectador(string nombre): Persona(nombre)
{
  this->nombre=nombre;
  this->gusto=true;
}

Espectador::~Espectador()
{

}

void Espectador::setGustarBanda(bool gusto)
{
  this->gusto=gusto;
}


void Espectador::imprimir(ostream &flujo)  throw(int)
{
	if(nombre.size() == 0) {
	  throw 5;
	}

	flujo<<"El nombre es:"<< this->getNombre();
	flujo << endl;
  if (gusto==false)
  {
    flujo <<"No le gusta el reggaeton" << endl;
  }else flujo <<"Le gusta el reggaeton " << endl;

}