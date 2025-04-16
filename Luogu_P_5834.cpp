#include <iostream>
#include <cstdio>

using namespace std;
typedef long long ll;

bool check(ll x)
{
  if (x % 3 == 0)
    return false;
  if (x % 5 == 0)
    return false;
  return true;
}
int main()
{
  ll k;
  scanf("%lld", &k);
  ll res = 15LL * (k / 8) - 1;
  k &= 7;
  while (k)
  {
    if (check(++res))
      --k;
  }
  printf("%d", res);
  return 0;
}
