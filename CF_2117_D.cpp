#include <bits/stdc++.h>
using namespace std;
int t;

int main()
{
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int cnt = 0;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x % 2 && st.count(x) == 0)
        cnt++;
      st.insert(x);
    }
    if (cnt % 2)
      puts("YES");
    else
      puts("NO");
  }
  return 0;
}