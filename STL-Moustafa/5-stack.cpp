#include <iostream>
#include <stack>
using namespace std;

void print(stack<string> &str)
{
  while (str.size() != 0)
  {
    cout << str.top() << " ";
    str.pop();
  }
  cout << "\n";
}

// elements ar removed from the top of the stack

int main()
{
  stack<string> str;
  str.push("name");
  str.push("is");
  str.push("aryan");

  print(str);
  return 0;
}