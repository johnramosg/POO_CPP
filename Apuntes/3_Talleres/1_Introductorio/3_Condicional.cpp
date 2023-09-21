#include <iostream>
#include <string>
using namespace std;

int main()
{
  // HACER UN CONDICIONAL
  string aux, auxBeca;
  double dinero, notas;
  bool isBecado;
  bool seguir = true;
  cout << "Cual es tu dinero: ";
  getline(cin, aux);
  dinero = stod(aux);
  cout << "Eres becado? (si,no) ";
  getline(cin, auxBeca);

  cout << "Cuales fue tu promedio de notas en ultimo grado: ";
  getline(cin, aux);
  notas = stod(aux);

  if (auxBeca == "si")
  {
    isBecado = 1;
  }
  else
  {
    if (auxBeca == "no")
    {
      isBecado = 0;
    }
    else
    {
      cout << "Hubo un error, digitaste algo mal";
      seguir = false;
    }
  }

  if (seguir = true)
  {
    if (dinero >= 100){
      cout << "Puedes entrar a la universidad por dinero";
    }
    else if (isBecado == 1 or notas >= 8){
        cout << "Puedes entrar a la universidad por que fuiste buen estudiante";
    }
    else{
      cout << "Paila, por ahora no puedes entar";
    }
  }
}
