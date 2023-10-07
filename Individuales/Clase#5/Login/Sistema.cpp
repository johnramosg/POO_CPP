#include "Sistema.h"
#include <iostream>
using namespace std;

Sistema::Sistema()
{
  nombre = " ";
}

void Sistema::accesoAdministrador(string user, string pas)
{
  if (user == "admin")
  {
    cout << "Usted es administrador y tiene todos los permisos" << endl;
  }
  else
  {
    cout << "Usted no es administrador y solo tiene acceso al módulo de registro" << endl;
  }
}

void Sistema::accesoModuloRegistro()
{
  cout << "Acá entran todos los usuarios y puede resgistrar" << endl;
}