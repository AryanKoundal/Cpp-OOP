#include <iostream>

// header different than queue
#include <deque>

using namespace std;

// function to print the dequeue without reference
void printfront(deque<int> dq)
{
  cout << "Queue elements front: "
       << "\n";
  while (!dq.empty())
  {
    cout << dq.front() << " ";
    dq.pop_front();
  }
  cout << "\n";
}

// function to print with reference and thus will modify the values of original deque
void printback(deque<int> &dq)
{
  cout << "Queue elements back: "
       << "\n";
  while (!dq.empty())
  {
    cout << dq.back() << " ";
    dq.pop_back();
  }
  cout << "\n";
}

int main()
{

  deque<int> dq;
  dq.push_front(10); // 10
  dq.push_front(5);  // 5 10
  dq.push_back(20);  // 5 10 20
  dq.push_back(30);  // 5 1 20 30

  printfront(dq); // 5 10 20 30
  printback(dq);  // 30 20 10 5
  printback(dq);  // nothing

  // to create a copy use "="
  // to create a copy, even if the original element is changed, the copy will not change
  // .at() willverify if that element will exist or not
  deque<int> copyofdq = dq;
  cout << copyofdq[1] << "\n";    // 10
  cout << copyofdq.at(1) << "\n"; // 10

  copyofdq.clear();
  cout << copyofdq.size() << "\n"; // 0

  return 0;
}
