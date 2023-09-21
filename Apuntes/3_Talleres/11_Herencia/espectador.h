#ifndef _ESPECTADOR_H_
#define _ESPECTADOR_H_
#include "persona.h"

class Espectador : public Persona
{
public:
  Espectador(string nombre);
  ~Espectador();
  void setGustarBanda(bool gusto);
  void imprimir(ostream &flujo) throw(int);

protected:
private:
  bool gusto;
};
#endif