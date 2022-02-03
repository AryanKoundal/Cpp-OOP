#include <iostream>

// same header file as queues for priority queue
#include <queue>

using namespace std;

// & is used for reference, this means this priority q and the lower one have same memory

// if & isnt used, that means the the new pq, is declared in the function print is the copy of the pq declared in main

void print(priority_queue<int> &pq)
{
  cout << "priority queue elements: ";
  while (!pq.empty())
  {

    // this is a non modifiable value
    cout << pq.top() << " ";

    pq.pop();
  }
  cout << "\n";
}

int main()
{
  // order of storing willbe from bigger 1st to smaller
  priority_queue<int> pq;
  pq.push(3);
  pq.push(5); // 5 3
  pq.push(1); // 5 3 1
  pq.push(7); // 7 5 3 1

  // creating a function to print the pq
  print(pq);

  return 0;
}