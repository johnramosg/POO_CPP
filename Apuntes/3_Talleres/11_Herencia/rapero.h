#include "cantante.h"
#ifndef _RAPERO_H_
#define _RAPERO_H_

class Rapero : public Cantante
{
public:
Rapero(string nombre);
~Rapero();
void cantar();

protected:
private:

};
#endif