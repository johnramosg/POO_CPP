#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;
#include <vector>

// Funcion main
int main()
{
  vector<int> v{1, 2, 3, 4}; // v contains {1, 2, 3, 4}
  int *p = v.data();              // p points to 1
  *p = 4;                         // v now contains {4, 2, 3, 4}
  ++p;                            // p points to 2
  *p = 3;                         // v now contains {4, 3, 3, 4}
  p[1] = 2;                       // v now contains {4, 3, 2, 4}
  *(p + 2) = 1;                   // v now contains {4, 3, 2, 1}

  system("pause");
  return 0;
}