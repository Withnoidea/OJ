#include <bits/stdc++.h>
using namespace std;
int n;

int fact(int n)
{
  if (n <= 2)
    return n;
  return n * fact(n - 1);
}

int main()
{
  cin >> n;
  cout << fact(n) << endl;
  return 0;
}
