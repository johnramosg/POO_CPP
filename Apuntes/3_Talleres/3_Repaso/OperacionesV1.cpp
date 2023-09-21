/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co


*/

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main(){
  float a,b,operacion;
  int c;
  cout << "Estas son las opciones, digite la que quiere realizar: \n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division \nOpcion a elegir: ";
  cin >> c;
  while (true)
  {
    if (c >= 1 and c <= 4)
    {
      break;
    }
    else
    {
      cout << "Dato invalido";
      cout << "Estas son las opciones, digite la que quiere realizar: \n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division \nOpcion a elegir: ";
      cin >> c;
    }
  };
  cout << "Escriba un numero: ";
  cin >> a;
  cout << "Escriba otro numero: ";
  cin >> b;
  if(c==1){
    operacion = a+b;
    cout << a <<"+"<<b<<"="<<operacion <<endl;
  }else if(c==2){
    operacion = a - b;
    cout << a << "-" << b << "=" << operacion << endl;
  }else if(c==3){
    operacion = a * b;
    cout << a << "*" << b << "=" << operacion << endl;
  }else if(c==4){
    operacion = a / b;
    cout << a << "/" << b << "=" << operacion << endl;
  }else{
    cout << "Hubo algun error." << endl;
  }
}