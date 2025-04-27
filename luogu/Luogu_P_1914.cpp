#include <bits/stdc++.h>
using namespace std;
string s;
int n;

int main()
{
  cin >> n >> s;
  for (int i = 0; i < s.size(); i++)
  {
    cout << char('a' + ((s[i] - 'a' + n) % 26));
  }
  return 0;
}