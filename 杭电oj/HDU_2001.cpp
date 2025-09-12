#include <bits/stdc++.h>
using namespace std;
double x1, y1, x2, y2;

int main()
{
  while(cin >> x1 >> y1 >> x2 >> y2)
  {
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("%.2lf\n", d);
  }

  return 0;
}