// #include <iostream>
// #include <vector>

// int main()
// {
//   std::vector<int> data = {1, 2, 4, 5, 5, 6};

//   // Set element 1
//   data.at(1) = 88;

//   // Read element 2
//   std::cout << "Element at index 2 has value " << data.at(2) << '\n';

//   std::cout << "data size = " << data.size() << '\n';

//   try
//   {
//     // Set element 6
//     data.at(6) = 666;
//   }
//   catch (std::out_of_range const &exc)
//   {
//     std::cout << exc.what() << '\n';
//   }

//   // Print final values
//   std::cout << "data:";
//   for (int elem : data)
//     std::cout << " " << elem;
//   std::cout << '\n';
// }

// ------------------------------------------------------------

// inserting into a vector
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> myvector(4, 100);
  std::vector<int>::iterator it;

  for (int i=0;i<myvector.size();i++){
      std::cout << " " << myvector[i];
    std::cout << '\n';
  };

  it = myvector.begin();
  it = myvector.insert(it, 200);

  myvector.insert(it, 2, 300);



  // "it" no longer valid, get a new one:
  it = myvector.begin();

  std::vector<int> anothervector(2, 400);
  myvector.insert(it + 2, anothervector.begin(), anothervector.end());

  int myarray[] = {501, 502, 503};
  myvector.insert(myvector.begin(), myarray, myarray + 3);

  std::cout << "myvector contains:";
  for (it = myvector.begin(); it < myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}