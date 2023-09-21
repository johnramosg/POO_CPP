//#ifndef _BOMBILLO_H_
//#define _BOMBILLO_H_
#include <string>
using namespace std;

class bombillo
{
  // Atributos
private:
  string estado;
  void prender();
  // Métodos
public:
  bombillo();
  void encender();
  void apagar();
  string verEstado();
};

//#endif