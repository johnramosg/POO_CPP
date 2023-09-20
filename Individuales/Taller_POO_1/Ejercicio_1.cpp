/*
Autor: John Jaider Ramos Gaviria
Correo: ramos.john@correounivalle.edu.co
Fecha creación: 2023-09-12
Fecha última modificación: 2023-09-12
*/
#include <iostream>  //Incluimos la libreria estandar para usar los dispositivos de entrada o salida
using namespace std; // Usamos el nombre de espacio estandar

int main()
{ // Definimos la funcion principal

  int tablas = 0;                  // Inicializamos la variable tablas
  cout << "  0 1 2 3 4 5" << endl; // Mostramos un encabezado
  for (int i = 0; i <= 5; i++)
  {            // Definimos un bucle for que en el cual inicializamos el iterador i, el cual se detiene cuando el iterador sea mayor que 5 aumenta de uno en uno
    cout << i; // Mostramos el iterador en pantalla
    for (int j = 0; j <= 5; j++)
    {                 // Definimos un bucle for que en el cual inicializamos el iterador j, el cual se detiene cuando el iterador sea mayor que 5 aumenta de uno en uno
      cout << " ";    // Mostramos un espacio en pantalla para que separe los numeros
      tablas = i * j; // Realizamos la multiplicacion de los iteradores para poder hacer las tablas de multiplicar
      cout << tablas; // Mostramos en pantalla el resultado de la operacion anterior
                      // Hacemos un salto de linea para que cuando termine cada fila de tablas la otra se muestre abajo
    }
    cout << endl;
  }
  return 0;
}