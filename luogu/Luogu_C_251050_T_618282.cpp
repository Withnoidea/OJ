#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    if (i < 10)
    {
      cout << i << " ";
    }
    else
    {
      int t = i;
      for (int j = 1; j <= x; j++)
      {
        int c = 0;
        while (t)
        {
          c += t % 10;
          t /= 10;
        }
        t = c;
        c = 0;
        if (t < 10)
        {
          cout << t << " ";
          break;
        }
      }
      // cout << t << " ";
    }
  }
  return 0;
}