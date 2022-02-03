#include <iostream>
// for using stack
#include <stack>
// for using pairs
#include <utility>

using namespace std;

void printpair(pair<int, string> p)
{
  // printing the elements
  cout << "1st & 2nd element of pair: (" << p.first << "&" << p.second << ")\n";
}

void printstack(stack<pair<int, string>> stackedpairs)
{
  while (!stackedpairs.empty())
  {
    // function call to get into the pair first and second elements
    printpair(stackedpairs.top());
    // removing the top layer of stack
    stackedpairs.pop();
  }
}

int main()
{

  // easiest way to assign make a pair, use funtion make_pair
  pair<int, string> p1 = make_pair(1, "aryan");
  pair<int, string> p2 = make_pair(2, "koundal");
  pair<int, string> p3 = make_pair(3, "name");

  // first and second are the keywords to first being key and second being value of <key, value> pair
  // cout << p1.first << " " << p1.second << "\n";

  // creating a stack of pairs
  stack<pair<int, string>> stackedpairs;
  // adding the elements to the stack
  stackedpairs.push(p1);
  stackedpairs.push(p2);
  stackedpairs.push(p3);

  // calling function to target one level of stack
  printstack(stackedpairs);

  return 0;
}