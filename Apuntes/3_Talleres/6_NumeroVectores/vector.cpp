#include "vector.h"
#include <iostream>
#include <string>
using namespace std;

Vector::Vector()
{
  vect.clear();
}

Vector::~Vector()
{
}

void Vector::construyeVector(int numeroDatos)
{

  for (int i = 0; i < numeroDatos; i++)
  {
    cout << i << endl;
    vect.push_back(0);
  }
}
