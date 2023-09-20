#include <string>
using namespace std;

class Camion
{
private:
  string placa; // placa
  int capacidadmaxima;    // capacidad maxima
  int pesototalcargado;

public:
  Camion(string laPlaca, int laCapacidadMaxima);
  bool cargarUnObjeto(int pesoDelObjeto); // true = se pudo hacer;false = no se pudo
  int hacerMudanza();                     // Retorna la carga que transportó
  string cualEsLaPlaca();
}; // agregue el ;