#include <bits/stdc++.h>
using namespace std;
int t;

bool cmp(vector<int> &res, int x)
{
  int i = 0, j = res.size() - 1;
  while (res[i] == 0 && i < res.size())
    i++;
  while (res[j] == 0 && j >= 0)
    j--;
  // cout << j << " " << i << endl;
  return j - i + 1 <= x;
}

int main()
{
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      res.push_back(a);
    }
    cout << (cmp(res, x) ? "YES" : "NO") << endl;
  }

  return 0;
}