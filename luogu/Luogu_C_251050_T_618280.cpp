#include <bits/stdc++.h>
using namespace std;

int x;

int main()
{
  cin >> x;
  if (x < 10)
  {
    cout << x * 20 << endl;
  }
  else if (x < 50)
  {
    cout << 10 * 20 + (x - 10) * 80 / 5 << endl;
  }
  else
  {
    int t = x % 10;
    if (t < 5)
    {
      x -= t;
      cout << 10 * 20 + 40 * 80 / 5 + (x - 50) * 120 / 10 + t * 20 << endl;
    }
    else if (t == 5)
    {
      x -= 5;
      cout << 10 * 20 + 40 * 80 / 5 + (x - 50) * 120 / 10 + 80 << endl;
    }
    else
    {
      x -= t;
      cout << 10 * 20 + 40 * 80 / 5 + (x - 50) * 120 / 10 + t * 80 / 5 << endl;
    }
  }
}