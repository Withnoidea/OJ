#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int mina = 1000, maxa = 0;
int n;
int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mina = min(mina, a[i]);
    maxa = max(maxa, a[i]);
  }
  cout << maxa - mina << endl;
  return 0;
}
