#include "colas.h"
#include <iostream>
using namespace std;

int main()
{
  Cola colaAutos;

  colaAutos.entrarAuto("ABC-123");
  colaAutos.entrarAuto("CGE-435");
  colaAutos.entrarAuto("WER-223");
  colaAutos.entrarAuto("CGV-765");
  colaAutos.mostrarAutos();
  colaAutos.sacarAuto();
  colaAutos.proximoAuto();
  colaAutos.mostrarAutos();
  cout << endl;
}
