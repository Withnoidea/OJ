#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;

LL solv(int n)
{
  LL res = 0;
  for (int i = 1; i <= n; i++)
  {
    int j = i;
    while (j)
    {
      int t = j % 10;
      if (t == 2 || t == 0 || t == 1 || t == 9)
      {
        res += i;
        break;
      }
      j /= 10;
    }
  }
  return res;
}

int main()
{
  cin >> n;
  cout << solv(n) << endl;
  return 0;
}