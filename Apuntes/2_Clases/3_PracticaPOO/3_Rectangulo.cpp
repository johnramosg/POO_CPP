// Clase Rectangulo

#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangulo{
  private:
    float ancho;
    float largo;

  public:
    Rectangulo(float,float);
    void perimetro();
    void area();
};

Rectangulo::Rectangulo(float _ancho, float _largo){
  ancho = _ancho;
  largo = _largo;
}

void Rectangulo::perimetro(){
  float p = ancho*2 +largo*2;
  cout << "El perimetro del rectangulo es: " << p << endl;
}

void Rectangulo::area(){
  float a = ancho*largo;
  cout << "El area del rectangulo es: " << a << endl;
}

// Funcion main
int main(){

  Rectangulo r1(20,4);

  r1.area();
  r1.perimetro();

  system("pause");
  return 0;
}


