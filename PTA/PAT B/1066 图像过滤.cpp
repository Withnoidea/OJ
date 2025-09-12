#include <bits/stdc++.h>
using namespace std;
int n, m, a, b, rep;

int main()
{
  cin >> n >> m >> a >> b >> rep;
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; i <= m; j ++)
    {
      int x;
      cin >> x;
      if(j > 1) printf(" ");
      if(x >= a && x <= b)
      {
        printf("%03d", rep);
      }
      else
      {
        printf("%03d", x);
      }
      if(j == m) printf("\n");
    }
  }
  return 0;
}