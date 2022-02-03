#include <iostream>

// for vector class - which is of array type
#include <vector>

using namespace std;

int main()
{
  // object of vector
  vector<int> v = {2, 4, 6, 8, 10};

  // adding element at the end
  v.push_back(12);
  v.push_back(14);

  // using scope resolution operator to declare a member in vector class
  vector<int>::iterator itr;

  // itr is a pointer type and hence should be de-referenced
  cout << "using interator" << endl;
  for (itr = v.begin(); itr != v.end(); itr++)
  {
    cout << *itr << " ";
    // values can be modified using this iterator
    cout << ++*itr << " ";
    cout << "\n";
  }
  cout << "\n";

  // using for each loop to interate over the elements in the vector
  cout << "using for each loop" << endl;
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << "\n";

  return 0;
}