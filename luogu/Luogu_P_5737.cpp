#include <bits/stdc++.h>
using namespace std;
int a, b;
vector<int> res;
int cnt;

bool is_leap(int x)
{
  return ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
}

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if (is_leap(i))
    {
      cnt++;
      res.push_back(i);
    }
  }
  cout << cnt << endl;
  for (auto x : res)
    cout << x << " ";

  return 0;
}