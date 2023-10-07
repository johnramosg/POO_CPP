#include <iostream>
#include "SistemaLogIn.h"
#include "Sistema.h"
using namespace std;

int main()
{
  SistemaLogIn usuario("admin", "123");
  Sistema biblioteca;
  usuario.iniciarSesion("admin", "123");
  biblioteca.accesoAdministrador(usuario.getUsuario(), usuario.getPassword());
  usuario.cerrarSesion();
}