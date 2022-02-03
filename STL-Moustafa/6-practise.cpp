#include <iostream>
#include <queue>

using namespace std;

class last_k_numbers_sum_stream
{
public:
  int k, sum = 0;
  queue<int> q;

  last_k_numbers_sum_stream(int _k)
  {
    k = _k;
  }

  int next(int new_num)
  {
    q.push(new_num);
    sum += new_num;

    if (q.size() > 4)
    {
      sum -= q.front();
      q.pop();
    }
    return sum;
  }
};

int main()
{
  last_k_numbers_sum_stream processor(4);

  int num;
  while (cin >> num)
  {
    cout << "the number added: " << num << "\n";
    cout << "the sum of last 4 numbers is: " << processor.next(num) << "\n";
  }
}