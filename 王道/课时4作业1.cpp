#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
  cin >> s;
  for (int i = 0, j = s.size() - 1; i < j; i++, j--)
  {
    if (s[i] != s[j])
    {
      puts("no");
      return 0;
    }
  }
  puts("yes");
  return 0;
}
