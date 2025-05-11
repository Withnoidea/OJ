#include <bits/stdc++.h>
using namespace std;
int n, ra, rA;
int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {

    if (s[i] >= '0' && s[i] <= '9')
      n++;
    if (s[i] >= 'a' && s[i] <= 'z')
      ra++;
    if (s[i] >= 'A' && s[i] <= 'Z')
      rA++;
  }
  cout << n << " " << ra << " " << rA << endl;
}