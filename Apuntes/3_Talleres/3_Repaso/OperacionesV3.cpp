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
  double a,b,operacion;
  int c;
  cin >> a;
  cin >> b;
  cin >> c;
  if (c == 1)
  {
    operacion = a + b;
    cout << operacion << endl;
  }
  else if (c == 2)
  {
    operacion = a - b;
    cout << operacion << endl;
  }
  else if (c == 3)
  {
    operacion = a * b;
    cout << operacion << endl;
  }
  else if (c == 4)
  {
    operacion = a / b;
    cout << operacion << endl;
  }
  else
  {
    cout << operacion << endl;
  }
}