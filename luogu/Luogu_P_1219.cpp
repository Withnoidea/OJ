#include <bits/stdc++.h>

using namespace std;
const int N = 20;
int n, cnt;
int g[N];
bool col[N], dg[N], udg[N];

void dfs(int u)
{
  if (u == n)
  {
    if (cnt < 3)
    {
      for (int i = 0; i < n; i++)
        cout << g[i] << ' ';
      cout << endl;
    }
    cnt++;
    return;
  }

  for (int i = 0; i < n; i++)
  {
    if (!col[i] && !dg[u + i] && !udg[n - u + i])
    {
      g[u] = i + 1;
      col[i] = dg[u + i] = udg[n - u + i] = true;
      dfs(u + 1);
      col[i] = dg[u + i] = udg[n - u + i] = false;
      g[u] = 0;
    }
  }
}

int main()
{
  cin >> n;
  dfs(0);
  cout << cnt << endl;
  return 0;
}