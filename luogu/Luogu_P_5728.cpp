#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N][5];
int n, res;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i][1] >> a[i][2] >> a[i][3];
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      int sumi = a[i][1] + a[i][2] + a[i][3];
      int sumj = a[j][1] + a[j][2] + a[j][3];
      if (abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5 && abs(a[i][3] - a[j][3]) <= 5 && abs(sumi - sumj) <= 10)
        res++;
    }
  }
  cout << res << endl;
  return 0;
}