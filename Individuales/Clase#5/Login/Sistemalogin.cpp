#include<iostream>
#include<string>
#include"Sistemalogin.hpp"

Sistemalogin::Sistemalogin(string _user,string _password){
  user=_user;
  password=_password;
}
void Sistemalogin::iniciarsesion(string _user, string _password)
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

Sistemalogin::~Sistemalogin(){

}