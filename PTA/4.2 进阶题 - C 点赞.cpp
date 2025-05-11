#include <bits/stdc++.h>
using namespace std;
const int N = 5010;
int c[N];
int n, res, resn;

int main()
{
  cin >> n;
  while (n--)
  {
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
      int x;
      cin >> x;
      c[x]++;
      if (res < c[x])
      {
        resn = x;
        res = c[x];
      }
      if (res == c[x] && resn < x)
      {
        resn = x;
        res = c[x];
      }
    }
  }
  cout << resn << " " << res << endl;
}