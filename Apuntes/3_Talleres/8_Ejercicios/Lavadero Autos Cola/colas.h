/*
Archivo: colas.h
Autor: Carlos Hernandez
Fecha creacion: 16/01/2022
Fecha ultima modificacion: 16/01/2022
licencia: GNU-GPL
*/

/**
Clase: colas.h
Responsabilidad: Generar la clase que almacene los autos para implementar funciones con estos
Relaciones: Ninguna
*/

#ifndef _COLAS_H_
#define _COLAS_H_

#include <string>
#include <queue>
using namespace std;

class Cola
{
  // Atributos
private:
  // Generamos un dato de tipo cola llamado "cola"
  queue<string> cola;
  // Metodos
public:
  // Constructor
  Cola();
  // Destructor
  ~Cola();
  // Funcion para ingresar un auto a la cola
  void entrarAuto(string placa);
  // Sacar un carro de la cola (en este saco se saca el primero)
  void sacarAuto();
  // Mostrar los autos en la cola
  void mostrarAutos();
  // Saber cual es el front de la cola, es decir el proximo carro a lavar
  void proximoAuto();
};

#endif