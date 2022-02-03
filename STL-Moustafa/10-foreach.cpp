#include <iostream>
#include <deque>

using namespace std;

void auto_exapmle()
{
  // data type itself cinsidered
  int x1 = 10;
  auto x2 = 10;        // c++ deduces int
  auto x3 = 10.0;      // double
  auto x4 = "mostafa"; // string
}

int main()
{
  auto_exapmle();

  int ar[] = {1, 2, 3, 4};
  // using & can modify the original values of the array
  // it automatically goes from begg to the end of the object
  // doesnt create a copy
  for (auto &i : ar)
  {
    cout << i + 2 << " ";
  }
  cout << "\n";

  deque<int> dq = {6, 7, 8, 9};
  // use of & prevents making of a copy
  // const variable ensure that no change in the list/array is made by iterator
  cout << "printing dq"
       << "\n";
  for (const auto &i : dq)
  {
    cout << i + 2 << " ";
    // i += 2;
  }
  cout << "\n";

  // i here is an int
  for (auto &i : dq)
  {
    cout << i << " ";
  }
  cout << "\n";

  // list can be written in the loop itself
  for (auto val : {1, 2, 3, 4, 5})
    cout << val << " "; // 1 2 3 4 5
  cout << "\n";

  // we can iterate over the string, chararcter by character
  for (auto val : "hello")
    cout << val; // hello
  cout << "\n";

  return 0;
}