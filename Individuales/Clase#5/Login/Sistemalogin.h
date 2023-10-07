#ifndef SISTEMA_HH
#define SISTEMA_HH

#include <string>

using namespace std;

class Sistemalogin
{
private:
    string user;
    string password;
    bool session;

public:
    Sistemalogin(string user, string password);
    void iniciarSesion(string user, string password);
    void cerrarSesion();
    void funcionesPersonalizadas();
    void setUser();
    void setPassword();
    string getUser();
    string getPassword();
    bool getSession();
    ~Sistemalogin();
};
#else
class Sistemalogin;
#endif