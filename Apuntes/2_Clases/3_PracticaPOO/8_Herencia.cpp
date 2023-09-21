// Herencia en POO

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
  private: //Atributos
    string nombre;
    int edad;
  public:
    Persona(string,int); //Constructor
    void mostrarPersona();
};


// Creemos otra clase que herede de Persona
// El public es que podre acceder a todo lo public de la clase persona
class Alumno : public Persona{
  private : //Atributos
    string codAlumno;
    float promedio;
  public: //Metodos
    // Constructor de la clase alumno
    Alumno(string , int, string, float);
    void mostrarAlumno();
};

// Constructor Persona
Persona::Persona(string _nombre, int _edad)
{
  nombre = _nombre;
  edad = _edad;
}
// Constructor Alumno

Alumno::Alumno(string _nombre, int _edad , string _codAlumno , float _promedio) : Persona(_nombre , _edad) {
  codAlumno = _codAlumno;
  promedio = _promedio;
}

// Mostrar datos persona
void Persona::mostrarPersona()
{
  cout << "Nombre:" << nombre << endl;
  cout << "Edad: " << edad << endl;
}
// Mostrar datos Alumno
void Alumno::mostrarAlumno(){
  mostrarPersona();
  cout <<"Codigo Alumno: " << codAlumno << endl;
  cout << "Promedio: " << promedio << endl;
}

// Funcion main
int main()
{
  Alumno alumno1("Carlos",18,"1234",9.1);
  alumno1.mostrarAlumno();
  alumno1.mostrarPersona();

  system("pause");
  return 0;
}
