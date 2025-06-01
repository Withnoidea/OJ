#include <bits/stdc++.h>
using namespace std;
int s = 1;
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n - 1; i++)
  {
    s = (s + 1) * 2;
  }
  cout << s << endl;
  return 0;
}