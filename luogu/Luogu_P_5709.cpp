#include <bits/stdc++.h>
using namespace std;
int n, t, s;

int main()
{
  cin >> n >> t >> s;
  if (t == 0)
    cout << 0 << endl;
  else
  {
    n = n - (s + t - 1) / t;
    if (n >= 0)
      cout << n << endl;
    else
      cout << 0 << endl;
  }
}