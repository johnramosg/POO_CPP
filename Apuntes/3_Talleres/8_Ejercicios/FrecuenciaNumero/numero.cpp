#include "numero.h"
#include <iostream>
#include <string>
using namespace std;
using std::to_string;
/*
Archivo: numero.cpp
Autor: Carlos Hernandez
Fecha creacion: 14/01/2022
Fecha ultima modificacion: 14/01/2022
licencia: GNU-GPL
*/

/*
Nombre: Numero
Funcion: Constructor
Retorno: No aplica
*/
Numero::Numero()
{
}
/*
Nombre: ~Numero
Funcion: Destructor
Retorno: No aplica
*/
Numero::~Numero()
{
}
/*
Nombre: entrarNumero
Funcion: Ingresar un numero
Retorno: No aplica
*/
void Numero::entrarNumero()
{
  string auxiliar;
  getline(cin, auxiliar);
  numero = stoi(auxiliar);
}
/*
Nombre: determinarDigitos
Funcion: determinar el numero de digitos de un numero
Retorno: No aplica
*/
int Numero::determinarDigitos()
{
  int numeroCifras = 1;
  while (numero >= 10)
  {
    numero = numero / 10;
    numeroCifras++;
  }
  return numeroCifras;
}

/*
Nombre: frecuenciaDigitos
Funcion: determinar la frecuencia de digitos de un numero
Retorno: No aplica
*/
void Numero::frecuenciaDigitos()
{
  int cero = 0;
  int uno = 0;
  int dos = 0;
  int tres = 0;
  int cuatro = 0;
  int cinco = 0;
  int seis = 0;
  int siete = 0;
  int ocho = 0;
  int nueve = 0;

  string aux = to_string(numero);
  for (int i = 0; i < aux.size(); i++)
  {
    char auxNumero = aux[i];
    if (auxNumero == '1')
    {
      uno++;
    }
    else if (auxNumero == '0')
    {
      cero++;
    }
    else if (auxNumero == '2')
    {
      dos++;
    }
    else if (auxNumero == '3')
    {
      tres++;
    }
    else if (auxNumero == '4')
    {
      cuatro++;
    }
    else if (auxNumero == '5')
    {
      cinco++;
    }
    else if (auxNumero == '6')
    {
      seis++;
    }
    else if (auxNumero == '7')
    {
      siete++;
    }
    else if (auxNumero == '8')
    {
      ocho++;
    }
    else if (auxNumero == '9')
    {
      nueve++;
    }
  }

  cout << "0 = " << cero << endl;
  cout << "1 = " << uno << endl;
  cout << "2 = " << dos << endl;
  cout << "3 = " << tres << endl;
  cout << "4 = " << cuatro << endl;
  cout << "5 = " << cinco << endl;
  cout << "6 = " << seis << endl;
  cout << "7 = " << siete << endl;
  cout << "8 = " << ocho << endl;
  cout << "9 = " << nueve << endl;
}