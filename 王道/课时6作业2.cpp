#include <stdio.h>
#include <stdlib.h>
int n;
char *p;

int main()
{
  scanf("%d", &n);
  char c = scanf("%c", &c);
  p = (char *)malloc(n);
  gets(p);
  // fgets(p, n, NULL);
  puts(p);

  return 0;
}
