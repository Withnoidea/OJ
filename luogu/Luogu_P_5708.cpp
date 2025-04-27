#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int main()
{
  cin >> a >> b >> c;
  double p = (a + b + c) / 2;
  printf("%.1lf", sqrt(p * (p - a) * (p - b) * (p - c)));
  return 0;
}