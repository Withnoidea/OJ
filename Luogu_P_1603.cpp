#include <bits/stdc++.h>
using namespace std;
string s;
map<string, int> mp = {
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
    {"ten", 10},
    {"eleven", 11},
    {"twelve", 12},
    {"thirteen", 13},
    {"fourteen", 14},
    {"fifteen", 15},
    {"sixteen", 16},
    {"seventeen", 17},
    {"eighteen", 18},
    {"nineteen", 19},
    {"twenty", 20},
    {"zero", 0},
    {"a", 1},
    {"both", 1},
    {"first", 1},
    {"another", 1},
    {"second", 1},
    {"third", 1},
};

int main()
{
  getline(cin, s);
  vector<int> res;
  string str;
  for (int i = 0; i < s.size(); i++)
    s[i] = tolower(s[i]);

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != ' ' && s[i] != '.')
    {
      str += s[i];
    }
    else
    {
      if (mp.count(str))
        res.push_back(mp[str]);
      str = "";
    }
  }
  sort(res.begin(), res.end());
  // for (int i = 0; i < res.size(); i++)
  //   cout << res[i] << " ";
  if (res.size() > 1)
  {
    bool flag = false;
    int i = res[0] == 0 ? 1 : 0;
    for (; i < res.size(); i++)
    {
      if (flag)
        printf("%02d", res[i] * res[i] % 100);
      else
      {
        printf("%d", res[i] * res[i] % 100);
        flag = true;
      }
    }
  }
  else
  {
    if(res.size() == 1)
    printf("%02d", res[0] * res[0] % 100);
    else
    printf("0");
  }
  return 0;
}
