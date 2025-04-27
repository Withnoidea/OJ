#include <bits/stdc++.h>
using namespace std;
int h, r;

int main()
{
  cin >> h >> r;
  double v = h * r * r * 3.14;
  printf("%.0lf", (20 * 1000 + v - 1) / v);
  return 0;
}