#include <bits/stdc++.h>
using namespace std;
int s, v;

int main()
{
  cin >> s >> v;
  int n = 24 * 60 + 8 * 60;
  int t = (s + v - 1) / v + 10;
  n -= t;
  if (n >= 24 * 60)
    n -= 24 * 60;
  printf("%02d:%02d\n", n / 60, n % 60);
}
