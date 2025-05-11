#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int cntn, cnt;
string resn, res;

int main()
{
  cin >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++)
  {
    for (int j = 0; j < s2.size(); j++)
    {
      int t1 = i, t2 = j;
      while (s1[t1] == s2[t2])
      {
        cnt++;
        res += s1[t1];
        t1++, t2++;
      }
      if (res.size() > resn.size())
      {
        resn = res;
        cntn = cnt;
      }
      res = "";
      cnt = 0;
    }
  }
  cout << cntn << endl;
  cout << resn << endl;
}