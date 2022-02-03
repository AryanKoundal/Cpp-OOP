#include <iostream>

// for list class - which is of doubly linked list type
#include <list>

using namespace std;

int main()
{
  // object of list
  list<int> v = {2, 4, 6, 8, 10};

  list<int>::iterator itr;

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