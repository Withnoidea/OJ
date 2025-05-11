#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int n;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n);
  int sum = 0;
  for (int i = 1; i < n - 1; i++)
    sum += a[i];
  printf("%.2lf\n", sum * 1.0 / (n - 2));
  return 0;
}