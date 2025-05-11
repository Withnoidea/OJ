#include <bits/stdc++.h>
using namespace std;
int n, x;
int cnt;

int main()
{
  cin >> n >> x;
  for (int i = 1; i <= n; i++)
  {
    int num = i;
    while (num)
    {
      int k = num % 10;
      num /= 10;
      if (k == x)
        cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
