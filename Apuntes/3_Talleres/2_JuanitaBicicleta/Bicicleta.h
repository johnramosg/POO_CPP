#include <string>
using namespace std;
// 
class Bicicleta
{
  // Atributos (en este ejercicio color no se usa )
  private:
    string color;
  // Metodos
  public:
    Bicicleta(string);
    void pinchar();
    void despinchar();
    void setColor(string);
    string getColor();
};