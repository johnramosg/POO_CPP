#include <string>
using namespace std;

class CalificaEmpleados
{
private:
  string calificacionEmpleado;

public:
  CalificaEmpleados(string calificacion);
  string analizarCalificacion(string calificacionEmpleado);
};