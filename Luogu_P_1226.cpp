#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL qmi(LL a, LL b, LL p)
{
  LL res = 1 % p;
  while(b)
  {
    if(b & 1) res = (LL) res * a % p;
    b = b >> 1;
    a = (LL) a * a % p;
  }

  return a;
}

int main()
{
  LL a, b, p;
  cin >> a >> b >> p;
  printf("%lld^%lld mod %lld=%lld", a, b, p, qmi(a, b, p));
  return 0;
}