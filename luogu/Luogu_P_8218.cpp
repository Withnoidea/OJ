#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, q;
int a[N];

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  cin >> q;
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    cout << a[r] - a[l - 1] << endl;
  }
  return 0;
}