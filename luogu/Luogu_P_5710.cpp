#include <bits/stdc++.h>
using namespace std;
int n;
int a, u, b, z;
int main()
{
  cin >> n;
  if (n % 2 == 0 && n > 4 && n <= 12)
    cout << 1 << " ";
  else
    cout << 0 << " ";

  if (n % 2 == 0 || (n > 4 && n <= 12))
    cout << 1 << " ";
  else
    cout << 0 << " ";

  if ((n % 2 == 0 && n <= 4 || n > 12) || (n % 2 && n > 4 && n <= 12))
    cout << 1 << " ";
  else
    cout << 0 << " ";

  if (n % 2 && n <= 4 || n > 12)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}