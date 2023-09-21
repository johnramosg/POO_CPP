#include <iostream>
#include <string>
using namespace std;
#include <vector>

// Funcion main
int main()
{
  /*vector <Bicicleta> misBicis;
  Bicicleta unaBici;
  misBicis.push_back(unaBici);*/

  // PRIMERA FORMA (VERDE)
  vector<int> numeros{1,2,3,4,5};
  for (int i = 0; i < numeros.size(); i++)
  {
    cout << numeros[i] << endl;
    // cout << misBicis[i].kilometrosRecorridos() << endl;
  }

  // SEGUNDA FORMA (ROJO)
  vector<int>::iterator i;
  for ( i = numeros.begin(); i != numeros.end(); i++)
  {
    // cout << misBicis->kilometrosRecorridos() << endl;
  }

  // TERCERA FORMA (AZUL)
  // for (Bicicleta cualBici : misBicis)
  //   cout << cualBici.kilometrosRecorridos() << endl;

  system("pause");
  return 0;
}