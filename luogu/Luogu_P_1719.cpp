#include <bits/stdc++.h>
using namespace std;
const int N = 220;
int a[N][N];
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> a[i][j];
      a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + a[i][j];
    }
  }

  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << a[i][j] << " \n"[j == n];
  //   }
  // }

  int res = -1e8;
  for (int x1 = 1; x1 <= n; x1++)
  {
    for (int y1 = 1; y1 <= n; y1++)
    {
      for (int x2 = x1; x2 <= n; x2++)
      {
        for (int y2 = y1; y2 <= n; y2++)
        {
          res = max(res, a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1]);
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}
