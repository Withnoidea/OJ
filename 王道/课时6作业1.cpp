#include <stdio.h>
int n;

void change(int *n)
{
  *n /= 2;
}


int main()
{
  scanf("%d", &n);
  change(&n);
  printf("%d\n", n);
  return 0;
}