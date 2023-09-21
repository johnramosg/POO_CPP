// POO en C++

#include <iostream>
#include <stdlib.h>
using namespace std;


// Super clase Persona
class Persona{
  private:
    string nombre;
    int edad;
  public:
    Persona(string, int);
    // Virtual => funcion de polimorfismo
    virtual void mostrar();
};

// CLASE ALUMNO
class Alumno : public Persona
{
private:
  float notaFinal;

public:
  Alumno(string, int, float);
  void mostrar();
};

// CLASE PROFESOR
class Profesor : public Persona
{
private:
  string materia;

public:
  Profesor(string, int, string);
  void mostrar();
};

// PERSONA
Persona::Persona(string _nombre, int _edad){
  nombre = _nombre;
  edad = _edad;
}

void Persona::mostrar(){
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
}

// ALUMNO
Alumno::Alumno(string _nombre, int _edad, float _notaFinal):Persona(_nombre,_edad){
  notaFinal = _notaFinal;
}

void Alumno::mostrar(){
  Persona::mostrar();
  cout << "Nota Final: " << notaFinal << endl;
}

// PROFESOR
Profesor::Profesor(string _nombre, int _edad, string _materia):Persona(_nombre,_edad){
  materia = _materia;
}

void Profesor::mostrar(){
  Persona::mostrar();
  cout << "Materia: "<< materia << endl;
}

// Funcion main
int main()
{

  Persona *vector[3];

  vector[0] = new Alumno("Alejandro",20,5);
  vector[1] = new Alumno("Maria", 15, 1.9);
  vector[2] = new Profesor("Roberto", 32, "Matematicas");

  vector[0] ->mostrar();
  cout << "\n";
  vector[1]->mostrar();
  cout << "\n";
  vector[2]->mostrar();

  system("pause");
  return 0;
}
