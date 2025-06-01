#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int res = 0;
  while(n --)
  {
    int x;
    cin >> x;
    res += (x == 2);
  }
  cout << res << endl;
  return 0;
}
