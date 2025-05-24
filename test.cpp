#include <bits/stdc++.h>
using namespace std;
const int N = 10;
int a[N];
vector<int> res;

int main()
{
  int n = 5;
  res.push_back(0);
  for (int i = 1; i <= 5; i++)
  {
    cin >> a[i];
    res.push_back(a[i]);
  }

  sort(a + 1, a + 1 + 5);
  sort(res.begin() + 1, res.end());
  for (int i = 1; i <= 5; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  for (auto x : res)
    cout << x << " ";
}