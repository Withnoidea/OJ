#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL res;
string s, num;

int main()
{
  cin >> s;
  for (int i = 0; i < s.size() - 1; i++)
    if (s[i] != '-')
      num += s[i];

  for (int i = 0; i < num.size(); i++)
    res += (num[i] - '0') * (i + 1);
  res %= 11;
  // cout << res << endl;
  if (res == 10)
  {
    if (s[s.size() - 1] == 'X')
      cout << "Right" << endl;
    else
    {
      s[s.size() - 1] = 'X';
      cout << s << endl;
    }
  }
  else
  {
    if (res == s[s.size() - 1] - '0')
      cout << "Right" << endl;
    else
    {
      s[s.size() - 1] = '0' + res;
      cout << s << endl;
    }
  }

  return 0;
}