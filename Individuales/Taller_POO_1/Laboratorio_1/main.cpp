#include <iostream>
#include <string>
#include"Camion.h"
int main()
{ // Cambie Main por main
  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 5000);

  int objetos[8] = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30};

  for (int cualObjeto = 0; cualObjeto < 8; cualObjeto++)
  {
    int objetoATransportar = objetos[cualObjeto];
    if (not unCamion.cargarUnObjeto(objetoATransportar))
      if (not otroCamion.cargarUnObjeto(objetoATransportar))
        cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
  }
  cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.hacerMudanza() << " kg." << endl;
  cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.hacerMudanza() << " kg." << endl;

  return 0;
}