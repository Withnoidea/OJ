#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int l[N], r[N], idx, e[N];

void init()
{
  r[0] = 1;
  l[1] = 0;
  idx = 2;
}

void add(int k, int x)
{
  e[idx] = x;
  r[idx] = r[k];
  l[idx] = k;
  l[r[k]] = idx; // 1
  r[k] = idx;    // 2  1和2顺序不可调换
  idx++;
}

void remove(int k)
{
  r[l[k]] = r[k];
  l[r[k]] = l[k];
}

int main()
{
  int n;
  cin >> n;
  init();
  while (n--)
  {
    string op;
    int k, x;
    cin >> op;
    if (op == "R")
    {
      cin >> x;
      add(l[1], x);
    }
    else if (op == "L")
    {
      cin >> x;
      add(0, x);
    }
    else if (op == "IL")
    {
      cin >> k >> x;
      add(l[k + 1], x);
    }
    else if (op == "IR")
    {
      cin >> k >> x;
      add(k + 1, x);
    }
    else
    {
      cin >> k;
      remove(k + 1);
    }
  }

  for (int i = r[0]; i != 1; i = r[i])
    cout << e[i] << " ";

  return 0;
}
