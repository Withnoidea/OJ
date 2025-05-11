#include <bits/stdc++.h>
using namespace std;
int n;
int cnt, s;

bool is_prime(int n)
{
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i <= n / i; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    if (is_prime(i) && s + i <= n)
    {
      cnt++;
      s += i;
      cout << i << endl;
    }
  }
  cout << cnt << endl;
  return 0;
}