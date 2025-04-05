#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  // long double l = -1e5 + 10, r = 1e5 + 10;
  // while (r - l > 1e-12)
  // {
  //   long double mid = (l + r) / 2;
  //   if (mid * mid * mid >= n)
  //     r = mid;
  //   else
  //     l = mid;
  // }
  // // cout << r << endl;
  printf("%.0lf\n", pow(n, 1.0 / 3));
  return 0;
}
