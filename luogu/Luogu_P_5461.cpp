// 1

// 0 1
// 1 1

// 0 0 0 1
// 0 0 1 1
// 0 1 0 1
// 1 1 1 1

#include <bits/stdc++.h>
using namespace std;
int n;

void f(int n)
{
  if (n == 1)
    cout << 1 << endl;
  if (n == 2)
  {
    cout << "0 1\n1 1\n";
  }
  f(n - 1);
}

int main()
{
  cin >> n;
  f(n);
  return 0;
}