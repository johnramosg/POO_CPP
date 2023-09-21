#include <stack>
#include <iostream>
using namespace std;

// Vamos a crear una clase Pila, entendiendo como pila aquel forma de organizar los datos donde el ultimo dato en entrar es el primero en salir, imaginalo como una pila de libros donde solo pudes sacar el ultimo libro que apilaste, o solo puedes agregar mas libros a la pila.

class Pila
{
  // Atributos
private:
  stack<int> pila;
  // Metodo
public:
  // Constructor
  Pila();
  // Destructor
  ~Pila();
  // Funcion para apilar un numero
  void apilar(int numero);
  // Funcion para desapilar un numero
  void desapilar();
  // Funcion para mostrar el elemento en el top
  void mostrarElemento();
  // Ver el tamaño de la pila
  int tamagno();
  // Desapilar un numero si este es par
  void desapilarConCondicion(int numero);
};