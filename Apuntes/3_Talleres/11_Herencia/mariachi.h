#include "cantante.h"
#ifndef _MARIACHI_H_
#define _MARIACHI_H_

class Mariachi : public Cantante
{
public:
Mariachi(string nombre);
~Mariachi();
void cantar();

protected:
private:

};
#endif