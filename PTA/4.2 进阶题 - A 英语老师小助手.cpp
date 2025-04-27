#include <bits/stdc++.h>
using namespace std;
int n;

bool check(string s)
{
  bool flag = true;
  for (int i = 0; i < s.size(); i++)
  {
    if (i < s.size() - 1)
    {
      if (s[i] >= 'A' && s[i] <= 'Z') // daxie
      {
        if ((s[i] - 'A') != (s[i + 1] - 'a') && ((s[i] - 'A') != (s[i + 1] - 'A' + 1)))
        {
          // cout << i << endl;
          flag = false;
          break;
        }
      }
      else // xiaoxie
      {
        if ((s[i] - 'a') != (s[i + 1] - 'A') && ((s[i] - 'a') != (s[i + 1] - 'a' - 1)))
        {
          // cout << (s[i] - 'a') << " " << (s[i + 1] - 'a' + 1) << endl;
          // cout << i << endl;
          flag = false;
          break;
        }
      }
    }
  }
  return flag;
}

int main()
{
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    cout << (check(s) ? "Y" : "N") << endl;
  }
  return 0;
}