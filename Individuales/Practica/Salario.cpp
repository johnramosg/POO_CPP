#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;


int mayorsalario(string nombre[], int salario[]){
  string mayorsalario;
  int mayorsalario;
  
}

int main()
{
  string nombre[10];
  int salario[10];

  for(int i=0;i<10;i++){
    cout<<"Ingrese el nombre del empleado "<<i+1;
    getline(cin, nombre[i]);
    cout << "Ingrese el nombre del empleado " << i + 1;
    cin>>salario[i];
    mayorsalario(nombre[i],salario[i]);
  }
}