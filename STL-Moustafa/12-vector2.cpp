#include <iostream>
#include <vector>

using namespace std;

void test1()
{
  // string is 1d array of chars
  vector<string> name = {"name", "aryan", "koundal"};

  // matrix of 3 rows, each row has dynamic coloums
  cout << "Printing the vector: ";
  cout << "Of num of rows " << name.size() << ": ";
  for (auto i : name)
  {
    cout << i << " ";
  }
  cout << "\n";

  cout << "Printing the size of each row: ";
  // this shows each row has mutliple characters
  for (auto i = 0; i < name.size(); ++i)
  {
    cout << name[i].size() << " ";
  }
  cout << "\n";
}

void print(vector<vector<int>> &v2d)
{
  // here auto is vector<int>, getting into particular row
  for (auto &i : v2d)
  {
    // here auto is int, getting the elements within the row
    for (auto &j : i)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
  cout << "\n\n";
}

void test2()
{
  // vector of 5 elements with 1 value each
  // 1 1 1 1 1
  vector<int> row(5, 1);

  // 3 rows, each row with 5 elements
  // becomes a 2d array, with 3 rows and 5 coloumns
  /*
  1 1 1 1 1
  1 1 1 1 1
  1 1 1 1 1
  */
  vector<vector<int>> v2d(3, row);

  // function call to print 2d array
  print(v2d);

  // number of rows
  int rows = v2d.size();
  // no of colums in 1st row
  int coloums = v2d[0].size();

  v2d[0][0] = 9;
  v2d[1].push_back(5);
  v2d[1].push_back(6);
  v2d[2].erase(v2d[2].begin());

  // function call to print 2d array
  print(v2d);
}

void test3()
{
  // array of size 5
  // vector<int> length(5);
  // 2d array of 4 rows and 5 colomns each
  // vector<vector<int>> area(4,length);
  // 3d array of 3 levels of each with 2d array
  // vector<vector<vector<int>>> volume(3,area);

  // other way of declaring the 3d array
  vector<vector<vector<int>>> v3d(3, vector<vector<int>>(4, vector<int>(5)));

  // for printing, we have to consider every individual 2d layer
  for (auto i = 0; i < v3d.size(); i++)
  {
    cout << "Layer num: " << i + 1 << "\n";
    print(v3d[i]);
  }
}

int main()
{
  // test1();
  // 2d array
  // test2();
  // 3d array
  test3();
}