#include <iostream>
using namespace std;
#include "mariachi.h"

Mariachi::Mariachi(string nombre) : Cantante(nombre)
{
  
}

Mariachi::~Mariachi()
{

}

void Mariachi::cantar()
{
  cout << "\n Abusadas mamacitas que ya llegó su aventurero" << endl;
  cout << "Ay lara la, ay lara la, ay lara la lara la " << endl;
  cout << "Ay lara la, ay lara la, ay lara la lara la" << endl;
}