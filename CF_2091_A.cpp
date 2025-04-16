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
    int cnt[15] = {0};
    bool f = false;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      cnt[x]++;
      if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 &&
          cnt[3] >= 1 && cnt[5] >= 1 && !f)
      {
        f = true;
        cout << i << endl;
      }
    }
    if (!f)
      cout << 0 << endl;
  }
  return 0;
}