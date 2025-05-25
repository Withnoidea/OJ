#include <bits/stdc++.h>
using namespace std;

double dis(double x1, double y1, double x2, double y2)
{
  return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
  double x1, y1;
  cin >> x1 >> y1;
  double x2, y2;
  cin >> x2 >> y2;
  double x3, y3;
  cin >> x3 >> y3;

  double res = 0;
  res = dis(x1, y1, x2, y2) + dis(x1, y1, x3, y3) + dis(x2, y2, x3, y3);

  printf("%.2lf", res);
}