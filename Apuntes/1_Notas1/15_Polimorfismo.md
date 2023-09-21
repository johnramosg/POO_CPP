# Polimorfismo

## Como lograr y para que sirve el polimorfismo

- El polimorfismo en C++ se consigue usando sobreescritura de métodos.

- El polimorfismo en C++ se consigue usando herencia con funciones virtuales y un
puntero a clase Base con el que apuntar a distintos objetos derivados.

- El polimorfismo ayuda a construir programas concisos, código más corto y con
funciones bien definidas, fáciles de modificar y adaptar.

## Polimorfismo estatico y dinamico

### Polimorfismo estatico

Es un polimorfismo en tiempo de compilacion, modificando los parametros o salidas del metodo manualmente.

### Polimorfismo Dinamico

Es un polimorfismo en tiempo de ejecución, que se logra atravésde
un puntero a una clase Base y un apuntador a sus clases Derivadas, posteriormente se llama a los métodos que se requieran.

Cada método implementa la modificación de sus comportamientos y en tiempo de ejecución estos se asignan dinámicamente de acuerdo al puntero y la tabla de función virtual (v-table).

## Ejemplo de Polimorfismo

### Arbol

Clase Base: Motor
Clase Hijas: ElectricoMotor , GasMotor

## Clase Motor | BASE

```cpp
class CMotor {
  virtual void Display () const;
  virtual void Input ();
};
```

## Clase Motor Gas | DERIVADA
```cpp
class CGasMotor :public CMotor {
public:
 virtual void Display () const;
 virtual void Input ();
```

## Clase Motor Electrico| DERIVADA
```cpp
class CElectricoMotor :public CMotor {
public:
 virtual void Display () const;
 virtual void Input ();
```

## Hacemos la llamada del objeto en tiempo de ejecución mediante un puntero
```c++
CMotor * pM;
pM = new CElectricMotor;
pM->Input ();    // CElectricMotor::Input ()
pM->Display ();  // CElectricMotor::Display ()
```

## Clases Abstractas y Funciones virtual Puras

Una clase abstracta es aquella que tiene al menos una funcion virtual pura, es decir, un metodo virtual sin implementación (en la clase base claro). De estas clases no se pueden instanciar objetos, solo sirve como clase padre para que otras hereden de esta y terminen de escribir sus metodos virtuales puros.

Para hacer una funcion virtual pura luego de los parentesis pones **=0**

### Clase Figura

```cpp
FIGURA.H
class Figura // Clase abstracta
{
 public:
 virtual double area() = 0; // Virtual pura
};

FIGURA.CPP
// Archivo Figura.cpp
Constructor y destructor...
// No existe double Figura::area() {}
```

### Clase Triangulo

```cpp
TRIANGULO.H
class Triangulo : public Figura
{
 public:
 virtual double area();
};

TRIANGULO.CPP
double Triangulo::area()
{
 return base * altura / 2;
}
```

## Cosas a tener en cuenta

- Puedes tener un vector que alamacene objetos que apunten la clase padre y realmente tener objetos que apuntes a las clases hijas.