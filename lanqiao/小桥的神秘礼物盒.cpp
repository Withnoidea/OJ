#include <iostream>
#include <deque>
using namespace std;
int main()
{
  int n;
  cin >> n;
  deque<int> dq;
  while (n--)
  {
    int op;
    cin >> op;
    if (op == 1)
    {
      int x;
      cin >> x;
      dq.push_back(x);
    }
    else if (op == 2)
    {
      if (!dq.size())
        puts("lan");
      else
        dq.pop_front();
    }
    else if (op == 3)
    {
      if (!dq.size())
        puts("qiao");
      else
        cout << dq.front() << endl;
    }
    else
    {
      cout << dq.size() << endl;
    }
  }
  return 0;
}