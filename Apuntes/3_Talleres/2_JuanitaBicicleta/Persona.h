#include <string>
using namespace std;
// ==> #include <Bicicleta.h>

class Persona{
  // Atributos
  private:
    string nombre;
    int km;
    // ==> Bicicleta miBicileta;
  // Metodos
  public:
    Persona(string);
    // Destructuración
    ~Persona();
    void comprar();
    void prestar(Persona personaParametro);
    void devolver(Persona personaParametro);
    void setNombre(string);
    string getNombre();
    int getKm();
    void setKm(int);
    void recorrer(int);
    void despinchar();
};