#include <bits/stdc++.h>
using namespace std;
const int N = 25;
int a[N][N];
int n;

int main()
{
  cin >> n;
  a[1][1] = 1;
  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << a[i][j] << " \n"[j == i];
    }
  }

  return 0;
}