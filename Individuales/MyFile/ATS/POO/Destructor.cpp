#include<iostream>

using namespace std;

class Perro{
  private:
    string nombre,raza;
  public:
    Perro(string,string);//Constructor
    ~Perro();//Destructor
    void mostrarDatos();
    void jugar();
};

Perro::Perro(string _nombre,string _raza){//Inicializar el contructor, sirve para inicializar los atributos
  nombre=_nombre;
  raza=_raza;
}
void Perro::mostrarDatos(){
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Raza: "<<raza<<endl;
}
void Perro::jugar(){
  cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}

Perro::~Perro(){//Destructor
  cout<<"El objeto ha sido destruido"<<endl;
}

int main(){
  Perro perro1=Perro("Firulais","Pitbull");
  perro1.mostrarDatos();
  perro1.jugar();
  perro1.~Perro();//Destruir el objeto, no es necesario llamarlo
  return 0;
}