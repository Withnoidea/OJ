#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main()
{
  while(cin >> s)
  {
    sort(s.begin(), s.end());
    for(auto x : s)
    {
      cout << x << " ";
    }
    cout << endl;
  }
}