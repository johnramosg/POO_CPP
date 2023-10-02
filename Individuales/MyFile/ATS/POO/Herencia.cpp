#include <iostream>
using namespace std;

class Persona{
  private://atributos
    string nombre;
    int edad;
  public://metodos
    Persona(string nombre,int edad);//Constructor
    void mostraDatos();
    ~Persona();//Destructor
}; 

class Alumno:public Persona{
  private:
    string codigo;
    float notaFinal;
  public:
    Alumno(string _nombre,int _edad,string _codigo,float _notaFinal);//constructor alumno
    void mostrarAlumno();
};



Persona::Persona(string _nombre,int _edad){
  nombre=_nombre;
  edad=_edad;
}

Alumno::Alumno(string _nombre,int _edad,string _codigo,float _notaFinal):Persona(_nombre,_edad){
  codigo=_codigo;
  notaFinal=_notaFinal;
}
void Persona::mostraDatos(){
  cout<<"Datos de la persona: "<<endl;
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Edad: "<<edad<<endl;
}
void Alumno::mostrarAlumno(){
  mostraDatos();
  cout<<"Datos del alumno: "<<endl;
  cout<<"Codigo: "<<codigo<<endl;
  cout<<"Nota Final: "<<notaFinal<<endl;
}
Persona::~Persona(){
  cout<<"Se destruyo el objeto"<<endl;
}
int main(){
  Persona persona1("Juan",20);
  Alumno alumno1("Pedro",21,"201910111",4.0);
  persona1.mostraDatos();
  alumno1.mostrarAlumno();

  return 0;
}