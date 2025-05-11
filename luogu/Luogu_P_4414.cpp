#include <bits/stdc++.h>
using namespace std;
vector<int> a(3);
string s;

int main()
{
  cin >> a[0] >> a[1] >> a[2];
  cin >> s;
  sort(a.begin(), a.end());
  for (int i = 0; i < 3; i++)
    cout << a[s[i] - 'A'] << " \n"[i == 2];

  return 0;
}