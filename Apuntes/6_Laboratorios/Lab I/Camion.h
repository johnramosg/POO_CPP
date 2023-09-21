/*
Nombre: Carlos Andres Hernandez Agudelo
Codigo: 202125653
email: carlos.hernandez.agudelo@correounivalle.edu.co
Fecha: 3/12/2021

Utilidad general del Archivo: Definir una clase Camion
*/

#ifndef _CAMION_H_
#define _CAMION_H_

#include <string>
using namespace std;

/*
Funcion: Crear una clase camion que me permita almacenar objetos

Atributos:
string placa
int capacidadMaxima
int pesoTotalCamion

Metodos (incluyendo constructor y destructor)
Camion(string laPlaca, int laCapacidadMaxima);
~Camion();
bool cargarUnObjeto(int pesoDelObjeto);
int cualEsElPesoTotal();
string cualEsLaPlaca();
*/

class Camion{
private:
    string placa;
    int capacidadMaxima;
    int pesoTotalCamion;

public:
    // Constructor
    Camion(string laPlaca, int laCapacidadMaxima);
    // Destructor
    ~Camion();
    /*
    nombre: cargarUnObjeto( int pesoDelObjeto)
    utilidad: almacenar un objeto (con cierto peso) al camion, si es posible y no sobrepasa la capacidad d este
    retorno:
    true => Se puede hacer
    false => No se puede pues sobrepasa el pesoTotalCamion del objeto
    */
    bool cargarUnObjeto(int pesoDelObjeto);
    /*
    nombre: cualEsElPesoTotal
    utilidad: saber cual es el valor del peso total de nuestro camion
    retorno: la variable (atributo) pesoTotalCamion
    */
    int cualEsElPesoTotal();
    /*
    nombre: cualEsLaPlaca
    utilidad: saber cual es la placa del camion
    retorno: la variable placa
    */
    string cualEsLaPlaca();
};

#endif
