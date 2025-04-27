#include <cstdio>
#include <algorithm>
using namespace std;

int a, b, c;

int main()
{
  scanf("%d%d%d", &a, &b, &c);
  int d[4] = {0, a, b, c};
  sort(d + 1, d + 4);
  if (d[1] + d[2] <= d[3])
  {
    printf("Not triangle\n");
    return 0;
  }
  if (d[1] * d[1] + d[2] * d[2] == d[3] * d[3])
    printf("Right triangle\n");
  else if (d[1] * d[1] + d[2] * d[2] > d[3] * d[3])
    printf("Acute triangle\n");
  else if (d[1] * d[1] + d[2] * d[2] < d[3] * d[3])
    printf("Obtuse triangle\n");
  if (a == b || b == c || a == c)
    printf("Isosceles triangle\n");
  if (a == b && b == c)
    printf("Equilateral triangle\n");
  return 0;
}