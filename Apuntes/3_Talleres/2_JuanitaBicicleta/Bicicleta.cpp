#include "Bicicleta.h"
#include <iostream>
#include <string>
using namespace std;

/*
nombre: Bicicleta (constructor)
descripcion: Definir el color de la bicileta apenas se instancie el objeto
retorno: (No aplica)
*/
Bicicleta::Bicicleta(string _color){
  color = _color;
}

/*
nombre: pinchar()
descripcion: Escribir que la bicicleta esta pinchada
retorno: (No aplica)
*/
void Bicicleta::pinchar(){
  cout << "La bicicleta está pinchada" << endl;
}

/*
nombre: despinchar()
descripcion: Escribir que la bicicleta esta despinchada
retorno: (No aplica)
*/
void Bicicleta::despinchar()
{
  cout << "Se puede usar la bicicleta nuevamente. Ya está despinchada" << endl;
}

/*
nombre: setColor(string _color)
descripcion: Darle un valor al atributo color
retorno: (No aplica)
*/
void Bicicleta::setColor(string _color){
  color = _color;
}

/*
nombre: setColor()
descripcion: Retornar el atributo color
retorno: color-(string)
*/
string Bicicleta::getColor(){
  return color;
}