#include"Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo(float _largo,float _ancho){
  largo=_largo;
  ancho=_ancho;
}

float Rectangulo::perimetro(){
  float perimetro;
  perimetro=(2*largo)+(2*ancho);
  cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
  return perimetro;
}

float Rectangulo::area(){
  float area;
  area=largo*ancho;
  cout << "El area del rectangulo es: " << area<<endl;
  return area;
}