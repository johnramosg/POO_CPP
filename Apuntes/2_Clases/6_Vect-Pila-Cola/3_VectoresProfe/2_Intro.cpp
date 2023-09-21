#include <iostream>
#include <string>
using namespace std;
#include <vector>


// Funcion main
int main()
{
  vector<int> numeros{1,2,3,4,5};

  // Tamaño
  int tam = numeros.size();
  cout << tam << endl;

  // // Borrar
  // numeros.clear();
  // cout << numeros.size() << endl;

  system("pause");
  return 0;
}