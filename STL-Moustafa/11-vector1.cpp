#include <iostream>
#include <vector>

// for find algo
#include <algorithm>

using namespace std;

void test_1()
{
  // creating an empty object named v1 of vector class
  vector<int> v1;
  // pushing elements at the end
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);

  // typecasting the size() function to int as
  for (int i = 0; i < (int)v1.size(); i++)
  {
    cout << v1[i] << " ";
  }
  cout << "\n";

  // non empty arrays can be declared too, (number of elements, value of the elements)
  vector<int> v2(5, 7); // 7 7 7 7 7
  v2.push_back(6);

  for (auto &i : v2)
  {
    cout << i << " ";
  }
  cout << "\n";
}

void test_2()
{
  vector<int> v3 = {-1, 1, -2, 2, 0, 3};

  // here &itr cant be used because this is a reference ot itr which is a pointer and using this will change the value inside the pointer and not the value that itr is pointing towards , so we'll used dereference operator * to modify the corresponding values
  // itr here is a pointer
  for (auto itr = v3.begin(); itr != v3.end();)
  {
    if (*itr < 0)
    {
      cout << *itr << "removed, ";
      // Returns An iterator pointing to the next element(or end()).This function will erase the element at the given position and thus shorten the % vector by one.
      itr = v3.erase(itr);
    }
    else
    {
      ++itr;
    }
  }
  cout << "\nThe resulting list is: ";
  for (const auto &i : v3)
  {
    cout << i << " ";
  }
  cout << "\n";
}

void test_3()
{
  vector<int> v4 = {3, -4, 7, -2, -1, 3, -5, 10, 3};

  auto itr = find(v4.begin(), v4.end(), -2);

  if (itr != v4.end())
  {
    vector<int> v2{8, 9, 10};
    v4.insert(itr, v2.begin(), v2.end());
  }
  cout << "Resultant vector array after insertion is: ";
  for (auto &i : v4)
  {
    cout << i << " ";
  }
  cout << "\n";
}

int main()
{
  // test_1();
  // test_2();
  test_3();

  return 0;
}

// e.initialising vector<int> v(10000), size of 10000 f.or vector<int> v;
// v.reserve(50000), here size is zero, cap is 50000
