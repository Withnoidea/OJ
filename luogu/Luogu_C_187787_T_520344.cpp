#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    int cnt_L = 0, cnt_C = 0;
    for (int i = 0; i < s.size(); i++)
    {
      string str = s.substr(i, 3);
      if (str == "LGR")
        cnt_L++;
      if (str == "CSP")
        cnt_C++;
    }
    cout << min((cnt_L + 1 >> 1), (cnt_C + 1 >> 1)) << endl;
  }
}