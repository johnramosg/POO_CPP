#include <iostream>

using namespace std;

class Persona{
  //Encapsulamiento
  private://Atributos
    string nombre;
    int edad;
  public://Metodos
    Persona(string nombre, int edad);//Constructor
    void correr();
    void leer();

};
//Inicializar el contructor, sirve para inicializar los atributos
Persona::Persona(string _nombre,int _edad){
  nombre=_nombre;
  edad=_edad;
}
void Persona::correr(){
  cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" años"<<endl;
}

void Persona::leer(){
  cout << "Soy " << nombre << " y estoy leyendo un libro" << endl;
}

int main(){
  Persona persona1=Persona("Mariana",22);
  Persona persona2 = Persona("Mario", 12);
  Persona persona3("Mariano",33);

  persona1.leer();
  persona2.correr();

  persona3.leer();
  persona3.correr();

  return 0;
}