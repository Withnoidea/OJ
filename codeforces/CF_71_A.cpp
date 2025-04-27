#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    if (s.size() > 10)
      printf("%c%d%c\n", s[0], s.size() - 2, s[s.size() - 1]);
    else
      printf("%s\n", s);
  }
}