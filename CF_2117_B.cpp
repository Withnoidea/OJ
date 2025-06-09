#include <bits/stdc++.h>
using namespace std;
int t;

int main()
{
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i ++)
      cout << i << " ";
    cout << 1 << endl;
  }

  return 0;
}
