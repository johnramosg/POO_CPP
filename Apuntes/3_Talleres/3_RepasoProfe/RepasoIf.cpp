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

int main()
{
  double a,b, operacion, resultado;
  cin >> a >> b >> operacion;
  if(operacion == 1){
    resultado = a+b;
  }else if(operacion == 2){
    resultado = a-b;
  }
  else if (operacion == 3)
  {
    resultado = a * b;
  }
  else if (operacion == 4)
  {
    resultado = a / b;
  }else{
    cout << "Dato invalido" << endl;
  }

  cout << resultado << endl;
  return 0;
}