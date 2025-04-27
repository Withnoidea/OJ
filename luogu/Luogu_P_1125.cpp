#include <bits/stdc++.h>
using namespace std;
int maxn, minn = 5000;

int main()
{
  string s;
  cin >> s;
  map<char, int> mp;
  for (int i = 0; i < s.size(); i++)
  {
    mp[s[i]]++;
  }
  for (int i = 0; i < s.size(); i++)
  {
    maxn = max(maxn, mp[s[i]]);
    minn = min(minn, mp[s[i]]);
  }
  int num = maxn - minn;
  if (num < 2)
  {
    cout << "No Answer" << endl;
    cout << 0 << endl;
    return 0;
  }

  for (int i = 2; i <= num / i; i++)
  {
    if (num % i == 0)
    {
      cout << "No Answer" << endl;
      cout << 0 << endl;
      return 0;
    }
  }
  cout << "Lucky Word" << endl;
  cout << num << endl;
  return 0;
}