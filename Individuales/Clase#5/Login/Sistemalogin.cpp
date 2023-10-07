#include "SistemaLogIn.h"
#include <iostream>
#include <string>
using namespace std;

SistemaLogIn::SistemaLogIn(string user, string pas)
{
  nombre = user;
  password = pas;
  sesion = true;
}

void SistemaLogIn::iniciarSesion(string usuario, string pas)
{
  if (nombre == usuario && password == pas)
  {
    sesion = true;
    cout << "Inicio de sesión exitoso" << endl;
  }
  else
  {
    sesion = false;
    cout << "Credenciales incorrectas" << endl;
  }
}

void SistemaLogIn::cerrarSesion()
{
  if (sesion)
  {
    sesion = false;
    cout << "Sesión cerrada" << endl;
  }
  else
  {
    cout << "No has iniciado sesión" << endl;
  }
}

void SistemaLogIn::funcionesPersonalizadas()
{
  if (sesion)
  {
    cout << "Aquí van las funciones personalizadas" << endl;
  }
  else
  {
    cout << "No tiene privilegios en el sistema" << endl;
  }
}

string SistemaLogIn::getUsuario()
{
  return nombre;
}
string SistemaLogIn::getPassword()
{
  return password;
}
bool SistemaLogIn::getSesion()
{
  return sesion;
}