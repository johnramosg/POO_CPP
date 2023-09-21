/*


──────▄▀▄─────▄▀▄             (っ◔◡◔)っ ♥ 𝕮𝖆𝖗𝖑𝖔𝖘 𝕳𝖊𝖗𝖓𝖆𝖓𝖉𝖊𝖟♥
─────▄█░░▀▀▀▀▀░░█▄                      ➋➊➋➎➏➎➌
─▄▄──█░░░░░░░░░░░█──▄▄              ♜♜♛♛♞♞☯☯☬☬☠☠✟✟
█▄▄█─█░░▀░░┬░░▀░░█─█▄    carlos.hernandez.agudelo@correunivalle.edu.co

*/

#include "Bicicleta.h"
#include "Persona.h"
#include <iostream>
using namespace std;
// Function main
int main()
{
  Persona personaJuanita("Juanita");
  Persona personaAna("Ana");
  Bicicleta Bicicleta("rojo");

  personaJuanita.comprar();
  personaJuanita.recorrer(20);
  personaJuanita.prestar(personaAna);
  personaAna.recorrer(10);
  Bicicleta.pinchar();
  personaAna.devolver(personaJuanita);
  personaJuanita.despinchar();
  Bicicleta.despinchar();
  system("pause");
  return 0;
}
