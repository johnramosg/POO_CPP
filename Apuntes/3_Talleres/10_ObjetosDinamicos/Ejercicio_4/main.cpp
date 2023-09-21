/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Historia: Apartir de un array dinamico queremos almacenar n numeros para luego ordenarlos de mayor a menor y mostrarlos al usuario
*/

#include "Array.h"

// Funcion main
int main()
{
  Array *miArray = new Array();
  miArray->setTamagno();
  miArray->construirArray();
  miArray->ordenarArray();
  miArray->mostrarArray();
  delete miArray;
  miArray = nullptr;

  return 0;
}
