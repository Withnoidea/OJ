#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 5e6 + 10;
LL q[N];
int n, m;

void quick_sort(LL q[], int l, int r)
{
  if (l >= r)
    return;
  int i = l - 1, j = r + 1, x = q[l + r >> 1];
  while (i < j)
  {
    do
      i++;
    while (q[i] < x);
    do
      j--;
    while (q[j] > x);
    if (i < j)
      swap(q[i], q[j]);
  }
  quick_sort(q, l, j);
  quick_sort(q, j + 1, r);
}

int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> q[i];

  sort(q, q + n);
  cout << q[m] << endl;
  return 0;
}