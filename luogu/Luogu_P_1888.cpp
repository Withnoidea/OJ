#include <bits/stdc++.h>
using namespace std;
vector<int> a(3);
int main()
{
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  int x = __gcd(a[0], a[2]);
  cout << a[0] / x << "/" << a[2] / x << endl;
}