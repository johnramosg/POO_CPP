#include <iostream>

using namespace std;

class Tiempo
{
private:
  int horas, minutos, segundos;

public:
  Tiempo(int, int, int);
  Tiempo(int);
  void mostrarTiempo();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
  horas = _horas;
  minutos = _minutos;
  segundos = _segundos;
}

Tiempo::Tiempo(int tiempoSegundos)
{
  horas = tiempoSegundos / 3600;
  minutos = (tiempoSegundos % 3600) / 60;
  segundos = (tiempoSegundos % 3600) % 60;
}
void Tiempo::mostrarTiempo()
{
  cout << horas << ":" << minutos << ":" << segundos << endl;
}
int main()
{
  Tiempo t1(10, 20, 30);
  Tiempo t2(65600);
  t1.mostrarTiempo();
  t2.mostrarTiempo();
  return 0;
}