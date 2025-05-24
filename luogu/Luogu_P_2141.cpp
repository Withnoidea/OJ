#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N], n;
int cnt;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  for (int i = 1; i <= n; i++)
  {
    bool found = false;
    for (int j = 1; j <= n && !found; j++)
    {
      if (j == i)
        continue;
      for (int k = j + 1; k <= n && !found; k++)
      {
        if (a[k] == a[j])
          continue;
        if (a[k] + a[j] == a[i])
        {
          cnt++;
          found = true;
        }
      }
    }
  }
  cout << cnt << endl;
}