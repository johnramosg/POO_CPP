/**
Archivo: EmpresaDeMudanza.cpp
Autores:
Carlos Adrés Hernández <carlos.hernandez.agudelo@correounivalle.edu.co >
Susana Valencia Bravo <susana.valencia@correounivalle.edu.co>
Jose Luis Hincapie Bucheli <jose.bucheli@correounivalle.edu.co>
Sebastian Quintero Ramírez <sebastian.quintero.ramirez@correounivalle.edu.co>
Jose Antonio Fernandez <jose.antonio.fernandez@correounivalle.edu.co>
Fecha creacion: 28/01/2022
Fecha ultima modificacion:28/01/2022
licencia: GNU-GPL
*/

#include "EmpresaDeMudanza.h"
#include <iostream>
#include <string>
using namespace std;


EmpresaDeMudanza::EmpresaDeMudanza(string _nombre, string _nit)
{
  nombre = _nombre;
  nit = _nit;
  camiones.clear();
}

EmpresaDeMudanza::~EmpresaDeMudanza()
{
}

void EmpresaDeMudanza::comprarCamion(string nombre, int peso)
{
  Camion miCamion(nombre, peso);
  camiones.push_back(miCamion);
}

void EmpresaDeMudanza::cargarLosCamiones(vector<int> objetos)
{

  for (int objeto: objetos)
  {
    for (Camion camion:camiones)
    {
      if (camion.cargarUnObjeto(objeto))
      {
        pesoTotal(objeto);
        break;
      }
    }
  }

}
void EmpresaDeMudanza::pesoTotal(int objeto)
{
  totalPeso += objeto;
};

int EmpresaDeMudanza::getpesoTotal()
{
  return totalPeso;
};
void EmpresaDeMudanza::saberPeso(){
  for (Camion miCamion : camiones)
  {
    cout << "Peso de: " << miCamion.cualEsLaPlaca() << " es de: " << miCamion.hacerMudanza() << endl;
    
  }
}