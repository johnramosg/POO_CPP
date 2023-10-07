#include<iostream>
#include"Sistemalogin.hpp"

int main(){
  Sistemalogin usuario("salome","123");

  usuario.iniciarsesion("salome","123");

  return 0;
}