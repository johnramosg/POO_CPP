#include <iostream>
#include <string>
using namespace std;

int main(){
  string id, nombre;
  string idSospechoso = "1234";
  string nombreSospechoso = "Jose Luis";
  bool seguir = true;
  do
  {
    cout << "Deme su nombre por favor: ";
    getline(cin,nombre);
    cout << nombre << " deme su identificacion: ";
    getline(cin,id);
    if(nombre==nombreSospechoso){
      cout << "Uy, 455, 455 tengo el sospechoso... " << endl;
      if(id!=idSospechoso){
        cout << "Me equivoque su id es diferente, lo siento " << endl;
      }else{
        cout << "Traigan la patrulla que atrape al perro " << endl;
        seguir = false;
      }
    }else if(nombre!=nombreSospechoso){
      cout << "Parece que no eres el sospechoso" << endl;
      if(id == idSospechoso){
        cout << "Mentira, 455, repito 455 , tengo el sospechoso" << endl;
        seguir = false;
      }
    }
  } while (seguir==true);
}