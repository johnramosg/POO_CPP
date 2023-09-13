/*
Autor: John Jaider Ramos Gaviria
Correo: ramos.john@correounivalle.edu.co
Fecha creación: 2023-09-12
Fecha última modificación: 2023-09-12
*/
#include <iostream>  //Incluimos la libreria estandar para usar los dispositivos de entrada o salida
using namespace std; // Usamos el nombre de espacio estandar

int main() // Definimos la funcion principal
{
  string NombreProducto,precio,  garantia, NombreUsuario; // Inicializamos las variables como cadenas de textos, ya que no se hara operaciones matematicas con ellas
      cout << "Nombre de producto: ";
      getline(cin, NombreProducto); // Guardamos el nombre del producto en la variable NombreProducto, usamos la funcion getline para poder leer las palabras incluso con los espacios
      cout << "Precio: ";
      getline(cin, precio); // Guardamos el precio en la variable precio, usamos la funcion getline para poder leer las palabras incluso con los espacios
      cout << "Garantia (años): ";
      getline(cin, garantia); // Guardamos la garantia en la variable garantia, usamos la funcion getline para poder leer las palabras incluso con los espacios
      cout << "Nombre de Usuario: ";
      getline(cin, NombreUsuario); // Guardamos el nombre de usuario en la variable NombreUsuario, usamos la funcion getline para poder leer las palabras incluso con los espacios

      cout << NombreUsuario << " adquirio " << NombreProducto << " por el precio de " << precio << ", con garantia de " << garantia << " años."<<endl; // Mostramos en pantalla el texto organizado con las variables
  
}