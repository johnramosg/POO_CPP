// POO en C++

#include <iostream>
#include <stdlib.h>
using namespace std;

class Tiempo
{
private:
  int h, m, s;

public:
  Tiempo(int, int, int);
  Tiempo(int);
  void mostrarTiempo();
};

// Construstor 1
Tiempo::Tiempo(int _h, int _m, int _s)
{
  h = _h;
  m = _m;
  s = _s;
}

Tiempo::Tiempo(int _s)
{
  s = _s;
  h = int(s / 60 / 60);
  s -= h * 60 * 60;
  m = int(s / 60);
  s -= m * 60;
}

void Tiempo::mostrarTiempo()
{
  cout << "El tiempo en h:m:s es : " << h << ":" << m << ":" << s << endl;
}
// Funcion main
int main()
{

  Tiempo t1(4, 30, 55);
  Tiempo t2(60);

  t1.mostrarTiempo();
  t2.mostrarTiempo();

  system("pause");
  return 0;
}
