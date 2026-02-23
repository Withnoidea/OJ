#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 3e5 + 10;
int a[N];

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  sort(a + 1, a + 1 + n);
  // 存在一个未被掰断的L
  int l = a[n];
  int ps = n;
  while (ps >= 1 && a[ps] == l)
    ps--;
  if (ps % 2 == 0)
  {
    bool match = true;
    for (int i = 1; i <= ps / 2; i++)
    {
      if (a[i] + a[ps - i + 1] != l)
      {
        match = false;
        break;
      }
    }
    if (match)
      cout << l << " ";
  }
  // 所有都是被掰断的
  if (n % 2 == 0)
  {
    l = a[1] + a[n];
    bool match = true;
    for (int i = 1; i <= n / 2; i++)
    {
      if (a[i] + a[n - i + 1] != l)
      {
        match = false;
        break;
      }
    }
    if (match)
      cout << a[1] + a[n] << " ";
  }

  return 0;
}