#include <string>
using namespace std;
#include <vector>
// 

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
    // Saber si el vector esta vacio
    bool esVacio();
    // Imprimir un mensaje para saber si es vacio o no
    void imprimirEsVacio();
    // Saber el tamaño del vector
    int tamagno();
    // Vaciar el vector
    void vaciar();
    // Imprimir el vector
    void imprimeVector();
    // Agregar dato al vector (al final)
    void agregarDato(int dato);
    // Intercambiar datos por su indice
    void intercambiarIndice(int a, int b);
    // Sumar elementos del vector y retornar la suma
    int sumarDatos();
    // Ordenar el vector por el metodo burbuja
    void burbuja();
    // Retornar el mayor elemento del vector
    int mayor();
    // Retornar el menor elemento del vector
    int menor();
    // Buscar un dato por su indice
    int buscarIndiceDato(int indiceEntrada);
    // Insertar un dato en determinada posicion
    void insertar(int dato, int posicion);
    // Borrar un dato en determinada posicion
    void borrarDatoEnPosicion(int a);
    // Borrar ultimo dato
    void borrarDato();
};