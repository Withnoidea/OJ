#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N][N][N];
int w, x, h;
int q;

int main()
{
  cin >> w >> x >> h;
  for (int i = 1; i <= w; i++)
  {
    for (int j = 1; j <= x; j++)
    {
      for (int k = 1; k <= h; k++)
        a[i][j][k] = 1;
    }
  }

  cin >> q;
  while (q--)
  {
    int x1, y1, z1;
    int x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    for (int i = x1; i <= x2; i++)
    {
      for (int j = y1; j <= y2; j++)
      {
        for (int k = z1; k <= z2; k++)
          a[i][j][k] = 0;
      }
    }
  }

  int res = 0;
  for (int i = 1; i <= w; i++)
  {
    for (int j = 1; j <= x; j++)
    {
      for (int k = 1; k <= h; k++)
        res += a[i][j][k];
    }
  }

  cout << res << endl;
  return 0;
}