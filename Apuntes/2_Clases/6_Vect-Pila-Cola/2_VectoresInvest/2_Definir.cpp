#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;
#include <vector>

// Funcion main
int main()
{
  vector<int> v{1, 2, 3};

  // using []
  int a = v[1]; // a is 2
  v[1] = 4;     // v now contains { 1, 4, 3 }

  // Size
  int size = v.size();
  cout << size << endl;

  // using at()
  int b = v.at(2); // b is 3
  v.at(2) = 5;     // v now contains { 1, 4, 5 }
  int c = v.at(3); // throws std::out_of_range exception

  system("pause");
  return 0;
}