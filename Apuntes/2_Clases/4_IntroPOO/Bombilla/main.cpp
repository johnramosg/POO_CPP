#include "bombillo.cpp"
#include <iostream>
using namespace std;

int main()
{
  bombillo luz, luz1;
  cout << "los bombillos estan:" << luz.verEstado() << endl
  << " " << luz1.verEstado() << endl;

  luz1.encender();
  cout << "los bombillos estan:" << luz.verEstado() << endl
  << " " << luz1.verEstado() << endl;

  luz.apagar();
  cout << "el bombillo esta:" << luz.verEstado() << endl;
}