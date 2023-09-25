#include <string>
#include <iostream>
using namespace std;

class Rectangulo
{
private:
  float largo;
  float ancho;

public:
  Rectangulo(float largo, float ancho);
  float perimetro();
  float area();
};
Rectangulo::Rectangulo(float _largo, float _ancho)
{
  largo = _largo;
  ancho = _ancho;
}

float Rectangulo::perimetro()
{
  float perimetro;
  perimetro = (2 * largo) + (2 * ancho);
  cout << "El perimetro del rectangulo es: " << perimetro << endl;
  return 0;
}

float Rectangulo::area()
{
  float area;
  area = largo * ancho;
  cout << "El area del rectangulo es: " << area << endl;
  return 0;
}

int main()
{
  Rectangulo Rectangulo1(3, 5);
  Rectangulo Rectangulo2(6, 8);

  Rectangulo1.perimetro();
  Rectangulo2.area();

  return 0;
}