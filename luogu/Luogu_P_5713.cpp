#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int t1 = n * 5;
  int t2 = n * 3 + 11;
  cout << (t1 < t2 ? "Local" : "Luogu") << endl;
}