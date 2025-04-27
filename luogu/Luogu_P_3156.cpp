#include <bits/stdc++.h>
using namespace std;
vector<int> res;
int n, m;

int main()
{
  cin >> n >> m;
  while (n--)
  {
    int x;
    cin >> x;
    res.push_back(x);
  }
  while (m--)
  {
    int k;
    cin >> k;
    cout << res[k - 1] << endl;
  }
}