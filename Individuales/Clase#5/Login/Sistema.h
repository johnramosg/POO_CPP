#ifndef SISTEMA_HH
#define SISTEMA_HH
#include <string>
using namespace std;

class Sistema
{
private:
  string nombre;

public:
  Sistema();
  void accesoAdministrador(string user, string pas);
  void accesoModuloRegistro();
};

#else
class SistemaLogIn;
#endif