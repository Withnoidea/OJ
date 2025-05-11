#include <bits/stdc++.h>
using namespace std;

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

bool is_hui(int i)
{
  string s = to_string(i);
  for (int i = 0, j = s.size() - 1; i < j; i++, j--)
  {
    if (s[i] != s[j])
      return false;
  }
  return true;
}

int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if (i % 2 == 0)
      continue;
    if (is_hui(i))
    {
      if (is_prime(i))
        cout << i << endl;
    }
  }
  return 0;
}