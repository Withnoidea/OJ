#include <bits/stdc++.h>
using namespace std;

const int N = 50;
int a[N][N];
int n;

int main()
{
  cin >> n;
  a[1][(n + 1) / 2] = 1;
  for (int k = 2; k <= n * n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (k - 1 == a[i][j])
        {
          // 1
          if (i == 1 && j != n)
          {
            a[n][j + 1] = k;
          }
          // 2
          if (i != 1 && j == n)
          {
            a[i - 1][1] = k;
          }
          // 3
          if (i == 1 && j == n)
          {
            a[i + 1][j] = k;
          }
          // 4
          if (i != 1 && j != n)
          {
            if (a[i - 1][j + 1] == 0)
              a[i - 1][j + 1] = k;
            else
              a[i + 1][j] = k;
          }
        }
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}
