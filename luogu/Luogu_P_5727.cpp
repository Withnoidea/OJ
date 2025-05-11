#include <bits/stdc++.h>
using namespace std;
vector<int> res;
int n;

int main()
{
  cin >> n;
  res.push_back(n);
  while (n != 1)
  {
    if (n % 2)
    {
      n = n * 3 + 1;
      res.push_back(n);
    }
    else
    {
      n /= 2;
      res.push_back(n);
    }
  }
  for (int i = res.size() - 1; i >= 0; i--)
  {
    cout << res[i] << " \n"[i == 0];
  }
  return 0;
}