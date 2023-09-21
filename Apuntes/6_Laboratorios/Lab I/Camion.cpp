/*
Nombre: Carlos Andres Hernandez Agudelo
Codigo: 202125653
email: carlos.hernandez.agudelo@correounivalle.edu.co
Fecha: 3/12/2021

Utilidad general del Archivo: Definir los metodos de la clase Objeto
*/

#include <iostream>
#include "Camion.h"
// #include <string>
using namespace std;

/*
nombre: Camion(string laPlaca, int laCapacidadMaxima)
utilidad: Definir el constructor de la clase Camion, para pasarle los parametros a los atributos
retorno: No Aplica
*/
Camion::Camion(string laPlaca, int laCapacidadMaxima){
    placa = laPlaca;
    capacidadMaxima = laCapacidadMaxima;
    pesoTotalCamion = 0;
}

/*
nombre: ~Camion()
utilidad: Destructor de la Clase
retorno: No Aplica
*/
Camion::~Camion() {}

/*
nombre: cargarUnObjeto(int pesoDelObjeto)
utilidad: cargar un objeto (con peso) al objeto de la clase Camion, guardando el peso del objeto en el atributo pesoTotalCamion
retorno: un booleano, si se puede realizr retorna true, si no se puede realizar retorna false
*/
bool Camion::cargarUnObjeto(int pesoDelObjeto){
    if (pesoTotalCamion + pesoDelObjeto <= capacidadMaxima)
    {
        pesoTotalCamion = pesoTotalCamion + pesoDelObjeto;
        return true;
    }
    else
        return false;
}

/*
nombre: cualEsElPesoTotal
utilidad: saber cual es el valor del peso total de nuestro camion
retorno: la variable (atributo) pesoTotalCamion (int)
*/
int Camion::cualEsElPesoTotal() { return pesoTotalCamion; }

/*
nombre: cualEsLaPlaca
utilidad: saber cual es la placa del camion
retorno: la variable placa (string)
*/
string Camion::cualEsLaPlaca() { return placa; }