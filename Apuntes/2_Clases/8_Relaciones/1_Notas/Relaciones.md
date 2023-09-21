# Relacion Contiene | para siempre

- Tiempo de programacion
- Tiempo de compilacion
- Tiempo de ejecucion

_*El objeto contenido se declara en la parte protegida o privada*_

> Si un objeto A contiene a un objeto B, nadie puede contener a ese objeto B

# Relacion Conoce | temporal

- Tiempo de programacion

_*En la parte protegida/privada se pone un puntero al objeto*_

> Recuerda que varios objetos pueden conocer un objeto D, pero solo uno es el propietario de este

## Ejemplo : Contiene

```cpp
class Motor{
  protected:
    int cilindraje;
}
```

```cpp
#include "Motor.h"
class Carro
{
  protected:
    Motor motor;
}
```

## Ejemplo Conoce

Un carro conoce un chofer

```cpp
class Chofer{
  protected:
    string nombre;
}
```

```cpp
#include "Chofer.h"
class Carro{
  protected:
    Chofer *chofer;
}
```

Un carro conoce a un chofer y un chofer conoce al carro

```cpp
class Chofer{
  protected:
    string nombre;
    Carro *carro;
}
```

```cpp
#include "Chofer.h"
class Carro{
  protected:
    Chofer *chofer;
}
```

## Como saber quien es el propietario tempral

> Una variable : `bool soyElPropietario`
> Punteros nulos para indicar que no hay relación

## Quien destruye el puntero que es conocido

> El propietario temporal

## Copiar un objeto

## Copia Superficial

> Se copia el objeto bit a bit, literalmente, sin interpetrar nignuna informacion
> Eso significa que si tiene un puntero hacia un objeto C, los dos objetos resultantes comparten ese objeto C en comun

- Ver el ejemplo en codigo

## Copia profunda

> Se copia el objeto bit a bit, exepto los punteros, para los cuales se crean nuevos objetos (on new) de forma recursiva
> De modo que estos dos objetos no comparten nada en comun

- Ver el ejemplo en codigo

# Constructor de copia

Tipicamente se declara así
`Clase::Clase(const Clase &otroObjeto)`

> Es decir, se recibe otro objeto de la misma clase, y el objeto en el que me encuentro (this) se construye como una copia del otro objeto

## Forma correcta de usar punteros

`Libro *libro = nullptr;` //Declaración del puntero y hacerlo nulo

/_ … _/

`libro = new Libro();` // Asignación del puntero

/_ … _/

`libro->leer();` // Usos del puntero

/_ … _/

`delete libro;` // Devolución de la memoria

`libro = nullptr;` // Puntero nulo
