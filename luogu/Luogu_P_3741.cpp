#include <bits/stdc++.h>
using namespace std;
string s, str;
int idx, res, n;

int main()
{
  cin >> n;
  cin >> s;
  if (n <= 1)
  {
    cout << 0 << endl;
  }
  else
  {
    for (int i = 0; i < s.size() - 1; i++)
    {
      str = s.substr(i, 2);
      if (str == "VK")
        res++;
    }

    for (int i = 0; i < s.size(); i++)
    {
      int r = 0;
      if (s[i] == 'V')
      {
        s[i] = 'K';
        for (int j = 0; j < s.size() - 1; j++)
        {
          str = s.substr(j, 2);
          if (str == "VK")
            r++;
        }
        s[i] = 'V';
      }
      else
      {
        s[i] = 'V';
        for (int j = 0; j < s.size() - 1; j++)
        {
          str = s.substr(j, 2);
          if (str == "VK")
            r++;
        }
        s[i] = 'K';
      }
      res = max(res, r);
    }

    cout << res << endl;
  }
  return 0;
}