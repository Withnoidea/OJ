#include <bits/stdc++.h>
using namespace std;
int check(int a, int b)
{
  int cnt = 0;
  for (int i = a; i <= b; i++)
  {
    if (i < 2)
      continue;
    for (int j = 2; j <= i / j; j++)
    {
      if (i % j == 0)
      {
        cnt++;
        break;
      }
    }
  }
  return cnt;
}

int main()
{
  int a, b;
  while (cin >> a >> b)
  {
    cout << check(a, b) << endl;
  }
  return 0;
}
