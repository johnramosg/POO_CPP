/*
Nombre: Carlos Andres Hernandez Agudelo
Codigo: 202125653
email: carlos.hernandez.agudelo@correounivalle.edu.co
Fecha: 3/12/2021

Utilidad general del Archivo: Definir el main, donde se hara todo los procesos utilizando los .h y los .cpp (en este caso de la clase Camion)
*/

/*
Historia: Hacer una mudanza en dos camiones (una clase y dos objetos): Vamos a modelar un camión para transportar mis objetos, que tienen distintos pesos. El camión tiene un número de placa y una capacidad máxima. Si se supera esa capacidad, el programa me avisará, para que el objeto que intento subir lo guarde en el otro camión.

Reto: Encontrar los errores, arreglar el codigo y pulirlo.
*/
#include <wchar.h>
#include "Camion.h"
#include <iostream>
using namespace std;

int main()
{
    // Inicializamos dos v  ariables del objeto camion
    Camion unCamion("ABC-001", 10000);
    Camion otroCamion("DEF-002", 5000);

    // Definimos los pesos de los 8 objetos en un array (lista)
    int objetos[8] = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30};

    // Hacemos un for para recorrer esos 8 objetos, almacenarlos en una variable "objetoATransportar" y almacenarlo en el objeto si es posible, si no lo es se imprime en pantalla. Teniendo en cuenta que si un camion no puede, pasa a otro.
    for (int cualObjeto = 0; cualObjeto < 8; cualObjeto++)
    {
        int objetoATransportar = objetos[cualObjeto];
        if (not unCamion.cargarUnObjeto(objetoATransportar))
            if (not otroCamion.cargarUnObjeto(objetoATransportar))
                cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
    }

    // Retornar lo que cada camion transporto
    cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.cualEsElPesoTotal() << " kg." << endl;
    cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.cualEsElPesoTotal() << " kg." << endl;

    // Return 0 sirve para terminar el proceso del programa pues como ves nuestra funcion pricipal es int mai (retorna int).
    return 0;

}