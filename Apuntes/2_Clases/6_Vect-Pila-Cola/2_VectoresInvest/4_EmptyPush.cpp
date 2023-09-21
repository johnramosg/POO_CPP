#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;
#include <vector>

// Funcion main
int main()
{
  vector<int> v;
  int sum(0);
  for (int i = 1; i <= 10; i++)
    v.push_back(i);  //create and initialize the vector

  cout << v.front() << " " << v.back() << endl;

  while (!v.empty()) //loop through until the vector tests to be empty
  {
    sum += v.back(); //keep a running total
    v.pop_back();    //pop out the element which removes it from the vector
  }

  cout << v.front() << " " << v.back() << endl;

  std::cout << "total: " << sum << '\n'; //output the total to the user
  return 0;
}