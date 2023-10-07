#include "Sistema.h"
#include <iostream>
#include <string>
using namespace std;

Sistema::Sistema()
{
  nameuser = " ";
}

void Sistema::accesoAdministrador(string _nameuser, string pas)
{
  if (_nameuser == "admin")
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