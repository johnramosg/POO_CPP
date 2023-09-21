// SOBRECARGA DE CONSTRUCTORES:
/*Puedes tener los constructores que quieras, pero debes saber que estos deben tener diferente tipos de inputs o parametros*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha
{
private: //Atributos
  int dia, mes, anio;

public: //Metodos
  Fecha(int, int, int);
  Fecha(long);
  void mostrarFecha();
};

// 9/1/2017 || 20170109

// Constructor 1
Fecha::Fecha(int _dia, int _mes, int _anio)
{
  dia = _dia;
  mes = _mes;
  anio = _anio;
}
// Constructor 2
Fecha::Fecha(long fecha)
{
  anio = int(fecha / 10000);                   //Extraer año
  mes = int((fecha - anio * 10000) / 100);     //Extraer mes
  dia = int(fecha - anio * 10000 - mes * 100); //Extraer dia
}
// Metodo
void Fecha::mostrarFecha(){
  cout << "La fecha es: " << dia << "/" << mes << "/" << anio << endl;
}

// Funcion main
int main()
{
  Fecha hoy(20,11,2021);
  Fecha ayer(20211119);

  hoy.mostrarFecha();
  ayer.mostrarFecha();

  system("pause");
  return 0;
}
