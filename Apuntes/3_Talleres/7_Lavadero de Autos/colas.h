#include <string>
#include <queue>
using namespace std;

/*
Clase de Cola => Para un sistema basico de lavado de autos
*/

class Cola{
  // Atributos
  private:
    // Generamos un dato de tipo cola llamado "cola"
    queue <string> cola;
  // Metodos
  public:
  // Constructor
    Cola();
    // Destructor
    ~Cola();
    // Funcion para ingresar un auto a la cola
    void entrarAuto(string placa);
    // Sacar un carro de la cola (en este saco se saca el primero)
    void sacarAuto();
    // Mostrar los autos en la cola
    void mostrarAutos();
    // Saber cual es el front de la cola, es decir el proximo carro a lavar
    void proximoAuto();
};
