#include <bits/stdc++.h>
using namespace std;
const int N = 110, M = 25;
double a[M];
double avg, res;

int n, m;

int main()
{
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> a[j];
    }
    sort(a + 1, a + 1 + m);
    for (int j = 2; j < m; j++)
      avg += a[j];
    avg /= (m - 2);
    res = max(res, avg);
    avg = 0;
  }
  printf("%.2lf\n", res);

  return 0;
}