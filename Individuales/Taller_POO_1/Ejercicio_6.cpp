/*
Autor: Kevin Ariel Ramírez Amaya.
email: kevin.amaya@correounivalle.edu.co
fecha de creación: 2023-09-19
Ultima fecha de modificación: 2023-09-19
*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> pila;
    int numeros[] = {1, 22, 3, 5, 0};
    cout << "Tamaño pila: " << pila.size() << endl;

    for (int i = 0; i < 4; i++)
    {
        int numero = numeros[i];

        pila.push(numero);
        cout << "El numero: " << numero << " se apilo" << endl;
        if (numero % 2 == 0)
        {
            pila.pop();
            cout << "El numero se desapilo" << endl;
        }
        else
        {
            cout << "El numero NO se desapilo" << endl;
        }
        cout << "Tamaño pila: " << pila.size() << endl;
    }
    return 0;
}