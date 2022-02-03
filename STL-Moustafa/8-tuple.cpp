#include <iostream>
// tie() and tuple
#include <tuple>

using namespace std;

int main()
{
  // declaring object of tuple class with 3 data types
  tuple<char, int, string> t1, t2, t3;
  t1 = make_tuple('a', 1, "aryan");
  t2 = make_tuple('b', 2, "koundal");
  t2 = make_tuple('c', 3, "name");

  // to access the elements, get <position>(name of tuple) has to pe used
  cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << "\n";

  // to modify the values get is used
  get<2>(t1) = "ARYAN";

  // we can compare tuples
  cout << (t2 == t2) << "\n";

  char ch;
  int num;
  string name;

  // tie to unpack the tuple variables into seperate variables
  tie(ch, num, name) = t1;
  cout << ch << " " << num << " " << name << "\n";

  // Concatenating 2 tuples to return a new tuple
  auto t4 = tuple_cat(t1, t2);

  return 0;
}