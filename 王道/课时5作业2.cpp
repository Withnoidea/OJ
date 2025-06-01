#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  string s_backup = s;
  reverse(s_backup.begin(), s_backup.end());
  if(s_backup == s)
  {
    cout << 0 << endl;
  }
  else if(s_backup < s)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << -1 << endl;
  }

  return 0;
}
