#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int op;
string str;

int main()
{
  cin >> n;
  cin >> s;
  while (n--)
  {
    cin >> op;
    if (op == 1)
    {
      cin >> str;
      s += str;
      cout << s << endl;
    }
    else if (op == 2)
    {
      int a, b;
      cin >> a >> b;
      s = s.substr(a, b);
      cout << s << endl;
    }
    else if (op == 3)
    {
      int a;
      cin >> a >> str;
      s.insert(a, str);
      cout << s << endl;
    }
    else
    {
      cin >> str;
      if(s.find(str) != -1)
        cout << s.find(str) << endl;
      else
        cout << -1 << endl;
    }
  }
  return 0;
}