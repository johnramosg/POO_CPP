 #include <iostream>
#include <string>
#include"Camion.h"
using namespace std;



Camion::Camion(string laPlaca, int laCapacidadMaxima){
  placa = laPlaca;
  capacidadmaxima = laCapacidadMaxima;
  pesototalcargado = 0;
}

bool Camion::cargarUnObjeto(int pesoDelObjeto){
  if (pesototalcargado + pesoDelObjeto <= capacidadmaxima){
    pesototalcargado = pesototalcargado + pesoDelObjeto;//cambie - por +
    return true;
  }
  else{
    return false;}
}
int Camion::hacerMudanza() { 
  return pesototalcargado; 
  }

string Camion::cualEsLaPlaca() { 
  return placa; 
  }