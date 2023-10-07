#ifndef SISTEMALOGIN_HH
#define SISTEMALOGIN_HH

#include <string>
using namespace std;

class SistemaLogIn
{
private:
    string nombre;
    string password;
    bool sesion;

public:
    SistemaLogIn(string usuario, string pas);
    void iniciarSesion(string usuario, string pas);
    void cerrarSesion();
    void funcionesPersonalizadas();
    void setUsuario();
    void setPasword();
    void setSesion();
    string getUsuario();
    string getPassword();
    bool getSesion();
};

#else
class SistemaLogIn;
#endif