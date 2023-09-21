// DESTRUCTOR => Eliminar un objeto que crees de esa clase
// Cuando inicias el constructor, finalizar el codigo se elimina automaticamente los objetos
/*
~ || Alt Gr + "+"
~ || Alt Gr + "*"
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro{
  private:
    string nombre,raza;
  public:
    Perro(string,string);
    ~Perro();
    void mostrarDatos();
};

// Constructor
Perro::Perro(string _nombre, string _raza){
  nombre = _nombre;
  raza = _raza;
}
// Destructor
Perro::~Perro(){
}

// Metodos
void Perro::mostrarDatos(){
  cout << "Nombre: " << nombre << endl;
  cout << "Raza: " << raza << endl;
}


// Funcion main
int main()
{

  Perro dog("Wendy","DogShow");
  dog.mostrarDatos();

  system("pause");
  return 0;
}
