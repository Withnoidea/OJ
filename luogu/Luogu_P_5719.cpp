#include <bits/stdc++.h>
using namespace std;
int n, k;
int cnt;
int resa, resb;

int main()
{
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
  {
    if (i % k == 0)
    {
      resa += i;
      cnt++;
    }
    else
    {
      resb += i;
    }
  }
  printf("%.1lf %.1lf", resa * 1.0 / cnt, resb * 1.0 / (n - cnt));
}