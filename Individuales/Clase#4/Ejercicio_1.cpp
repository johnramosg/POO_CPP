// Autor: Andrey Quiceno
// Correo: adolfoquiceno@correounivalle.edu.co
// Fecha creación: 2023-09-12
// Fecha última modificación: 2023-09-12

#include <iostream>
using namespace std;

int main()
{
    int param, spaceParam = 1, asteriskParam = 1;
    cout << "Digite un número de parámetros: ";
    cin >> param;
    spaceParam = param - 1;
    cout << endl;
    for (int i = 1; i <= param; i++)
    {
        for (int j = 1; j <= spaceParam; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= asteriskParam; k++)
        {
            cout << "**";
        }
        spaceParam = spaceParam - 1;
        asteriskParam = asteriskParam + 1;
        cout << endl;
    }
}