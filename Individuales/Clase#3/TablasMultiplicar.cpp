#include <iostream>
using namespace std;
int TablasMultiplicar()
{
  int tabla = 0;
  cout << "  0 1 2 3 4 5" << endl;
  for (int i = 0; i <= 5; i++)
  {
    cout <<i<< " ";
    for (int j = 0; j <= 5; j++)
    {
      tabla = i * j;
      cout << tabla << " ";
    }
    cout << endl;
  }
  return 0;
}
int main()
{
  TablasMultiplicar();
}
