#include <bits/stdc++.h>
using namespace std;
int s[200];
int cnt, res;
int a, b, c;

int main()
{
  cin >> a >> b >> c;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= b; j++)
    {
      for (int k = 1; k <= c; k++)
      {
        s[i + j + k]++;
        if (s[i + j + k] > cnt)
        {
          cnt = s[i + j + k];
          res = i + j + k;
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}