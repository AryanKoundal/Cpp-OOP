#include <iostream>
#include <deque>

using namespace std;

void print_front(deque<int> dq)
{
  deque<int>::iterator itr = dq.begin();

  cout << "queue elements from front: ";
  while (itr != dq.end())
  {
    cout << *itr << " ";
    itr++;
  }
  cout << "\n";
}

void print_back(deque<int> dq)
{
  // deque<int>::reverse_iterator itr; instead of this auto keyword

  cout << "Queue elements from back: ";
  for (auto itr = dq.rbegin(); itr != dq.rend(); itr++)
  {
    cout << *itr << " ";
    // values can be modified using itr and rev_itr
  }
  cout << "\n";
}

void print_front_constant(deque<int> dq)
{
  cout << "queue elements from front: ";

  deque<int>::const_iterator itr = dq.cbegin();

  while (itr != dq.cend())
  {
    cout << *itr << " ";
    //*it = 10;		// can't be modified becaue the iterator is CONST
    ++itr;
  }

  cout << "\n";
}

void lets_play()
{
  deque<int> q{1, 2, 3, 4, 5};

  auto it = q.begin() + 3; // FORTH element position
  cout << *it << "\n";     // 4

  cout << *(it--) << "\n"; // 4 then move to 3rd position
  cout << *it << "\n";     // 3

  cout << *(--it) << "\n"; // 2
  cout << *it << "\n";     // 2 Now on 2nd

  cout << *(it + 3) << "\n"; // 5th position
  it += 3;
  cout << *it << "\n"; // 2 Now on 5th position

  // reset all to 10
  for (auto it = q.begin(); it != q.end(); ++it)
    *it = 10;
}

int main()
{
  deque<int> dq = {1, 2, 3, 4, 5};

  // emaxple of a iterator
  print_front(dq);

  // to show reverse iterator and auto
  print_back(dq);

  // function using const_iterator
  print_front_constant(dq);

  // accesing differet elements through itr
  lets_play();

  return 0;
}