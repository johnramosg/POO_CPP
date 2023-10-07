#ifndef SISTEMA_HH
#define SISTEMA_HH
#include <string>
using namespace std;

class Sistema
{
private:
  string nameuser;

public:
  Sistema();
  void accesoAdministrador(string nameuser, string password);
  void accesoModuloRegistro();
};
#else
class Sistemalogin;
#endif