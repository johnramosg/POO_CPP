/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co


*/
#include "pila.cpp"
#include <iostream>
using namespace std;

int main()
{
  Pila miPila;

  int datos[] = {1, 22, 3, 5};

  cout << "Tamaño pila: " << miPila.tamagno() << endl;
  for (int i = 0; i < 4; i++)
  {
    miPila.apilar(datos[i]);
    miPila.desapilarConCondicion(datos[i]);
    cout << endl;
  };
}