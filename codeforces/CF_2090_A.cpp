#include <bits/stdc++.h>
using namespace std;
int t;

int main()
{
  cin >> t;
  while (t--)
  {
    int x, y, a;
    cin >> x >> y >> a;
    if ((a % (x + y)) >= x)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}