#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
  cin >> n;
  int h = n / 60;
  int m = n % 60;

  printf("|%d|%d|:|%d|%d|", h / 10, h % 10, m / 10, m % 10);
}