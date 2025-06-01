#include <stdio.h>
int x;
char a;
double d;

int main()
{

  scanf("%d %c %lf", &x, &a, &d);
  printf("%.2lf", x + a + d);
  return 0;
}