
#include <iostream>
#include "Sistemalogin.h"
#include "Sistema.h"
using namespace std;

int main()
{
  Sistemalogin usuario("salome", "123");
  Sistema biblioteca("admin", "123");

  usuario.iniciarSesion("saome", "123");
  usuario.cerrarSesion();
  usuario.funcionesPersonalizadas();
  biblioteca.accesoAdministrador(usuario.getUser(), usuario.getPassword());
  usuario.cerrarSesion();
}