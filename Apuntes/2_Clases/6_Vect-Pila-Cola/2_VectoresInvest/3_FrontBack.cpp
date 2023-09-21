#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;
#include <vector>

/*You have to use the empty() function to check that the vector isn't empty, because if this happens, the front() and back() function invoke a undefined behavior*/

// Funcion main
int main()
{
  vector<int> v{4, 5, 6}; // In pre-C++11 this is more verbose
  int a = v.front();           // a is 4, v.front() is equivalent to v[0]
  v.front() = 3;               // v now contains {3, 5, 6}
  int b = v.back();            // b is 6, v.back() is equivalent to v[v.size() - 1]
  v.back() = 7;                // v now contains {3, 5, 7}

  system("pause");
  return 0;
}