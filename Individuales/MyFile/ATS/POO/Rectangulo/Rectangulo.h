#include<string>
#include <iostream>
using namespace std;

class Rectangulo{
  private:
    float largo;
    float ancho;
  public:
    Rectangulo(float largo,float ancho);
    float perimetro();
    float area();
};