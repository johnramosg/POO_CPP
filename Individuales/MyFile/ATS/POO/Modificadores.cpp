#include <iostream>

using namespace std;

class Punto{
  private://atributos
    int x,y;
  public://metodos
    Punto();//Constructor
    void setPunto(int x,int y);//Metodo set
    int getPuntox();//Metodo get
    int getPuntoy();//Metodo get
};
Punto::Punto(){
}
//establecemos valores a los atributos
void Punto::setPunto(int _x,int _y){
  x=_x;
  y=_y;
}
int Punto::getPuntox(){
  return x;
}
int Punto::getPuntoy(){
  return y;
}
int main(){
  Punto punto1;
  punto1.setPunto(10,20);
  cout<<"El valor de x es: "<<punto1.getPuntox()<<endl;
  cout<<"El valor de y es: "<<punto1.getPuntoy()<<endl;
  return 0;
}