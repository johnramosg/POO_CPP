#include <string>
using namespace std;
#include <vector>

/*
CLASE VECTOR
*/


// vector<int> v = {7, 5, 16, 8};
class Vector
{
  //Atributos
  private:
    // inicializamos un vector
    vector <int> vect;
    // int n;
  // Meotodos
  public:
    // Constructor vacio
    Vector();
    // Destructor
    ~Vector();
    // Construir el vector con determinado numero de daots
    void construyeVector(int numeroDatos);
};