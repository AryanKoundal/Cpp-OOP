#include <iostream>

// header file for using queue
#include <queue>

using namespace std;

int main()
{

  // creating an object of name q and type int in queue
  queue<int> q;

  // push(g) 	Adds the element ‘g’ at the end of the queue.
  q.push(10);
  q.push(20);
  q.push(30);

  // back()	Returns a reference to the last element of the queue.
  // hence values can be modified
  cout << "Last element in Queue: " << q.back() << "\n";
  // cout << "Last element in Queue: " << ++q.back() << "\n";
  // cout << "Last element in Queue: " << q.back() << "\n";

  cout << "Queue elements: ";
  while (q.size() != 0)
  {
    cout << "\nfront: " << q.front() << "\tback: " << q.back();
    q.pop();
  }

  return 0;
}