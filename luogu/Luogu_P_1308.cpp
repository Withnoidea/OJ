#include <bits/stdc++.h>
using namespace std;
string s, str;
int res, idx;

int main()
{
  cin >> s;
  for (int i = 0; i < s.size(); i++)
    s[i] = tolower(s[i]);

  getline(cin, str);
  getline(cin, str);
  // cout << str << endl;
  for (int i = 0; i < str.size(); i++)
  {
    str[i] = tolower(str[i]);
  }

  string word;
  bool flag = false;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == ' ')
    {
      if (word == s)
      {
        if (!flag)
        {
          idx = i - word.size();
        }
        flag = true;
        res++;
      }
      word = "";
      continue;
    }
    word += str[i];
  }
  if (word == s)
  {
    res++;
    if (!flag)
    {
      idx = s.size() - word.size();
    }
    flag = true;
  }
  if (res > 0)
  {
    cout << res << " " << idx << endl;
  }
  else
  {
    puts("-1");
  }
  return 0;
}