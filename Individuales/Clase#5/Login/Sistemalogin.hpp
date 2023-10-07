#ifndef SISTEMA_HPP
#define SISTEMA_HPP

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
    void iniciarsesion(string user, string password);
    void cerrarsesion();
    void funcionespersonalizadas();
    void setName();
    void setPassword();
    string getName();
    string getPassword();
    ~Sistemalogin();
};
#endif