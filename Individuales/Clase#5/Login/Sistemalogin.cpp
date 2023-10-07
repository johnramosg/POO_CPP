#include <iostream>
#include <string>
#include "Sistemalogin.h"
using namespace std;

Sistemalogin::Sistemalogin(string _user, string _password)
{
  user = _user;
  password = _password;
  session = true;
}

void Sistemalogin::iniciarSesion(string _user, string _password)
{
  if (user == _user && password == _password)
  {
    session = true;
    cout << "Inicio de session Exitoso" << endl;
  }
  else
  {
    session = false;
    cout << "Credenciales Incorrectas" << endl;
  }
}

void Sistemalogin::cerrarSesion()
{
  if (session)
  {
    session = false;
    cout << "Sesión cerrada" << endl;
  }
  else
  {
    cout << "No has iniciado sesión" << endl;
  }
}
void Sistemalogin::funcionesPersonalizadas()
{
  if (session)
  {
    cout << "Aquí van las funciones personalizadas" << endl;
  }
  else
  {
    cout << "No tiene privilegios en el sistema" << endl;
  }
}
Sistemalogin::~Sistemalogin()
{
}
string Sistemalogin::getUser()
{
  return user;
}
string Sistemalogin::getPassword()
{
  return password;
}
bool Sistemalogin::getSession()
{
  return session;
}