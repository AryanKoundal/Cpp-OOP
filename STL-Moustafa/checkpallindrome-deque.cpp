#include <iostream>
#include <deque>

using namespace std;

bool ispallindrome(string str)
{
  deque<char> dq;
  for (char c : str)
  {
    dq.push_back(c);
  }

  while (dq.size() > 1)
  {
    char start = dq.front();
    dq.pop_front();

    char end = dq.back();
    dq.pop_back();

    if (start != end)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string str = "usa";

  cout << boolalpha;
  cout << ispallindrome(str);
  return 0;
}