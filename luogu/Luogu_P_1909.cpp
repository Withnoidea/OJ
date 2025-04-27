#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
vector<PII> mp;
int n;

int main()
{
  cin >> n;
  for (int i = 0; i < 3; i++)
  {
    int a, b;
    cin >> a >> b;
    mp.push_back({b, a});
    // cin >> mp[i].second >> mp[i].first;
  }
  sort(mp.begin(), mp.end());
  int p = 0;
  for (int i = 0; i < 3; i++)
  {
    PII x = mp[i];
    cout << x.first << " " << x.second << endl;
    if (x.second > n)
    {
      p += n * x.first;
    }
    else
    {
      p += x.second * x.first;
      n -= x.second;
    }
  }
  cout << p << endl;
  return 0;
}