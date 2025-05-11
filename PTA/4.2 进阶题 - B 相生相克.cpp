#include <bits/stdc++.h>
using namespace std;
// 0  1  2  3 4
// 金 木 水 火 土
int s[5] = {2, 3, 1, 4, 0};
int k[5] = {1, 4, 3, 0, 2};
map<int, int> mp_w = {
    {0, 2},
    {1, 3},
    {2, 1},
    {3, 4},
    {4, 0}};

map<int, int> mp_l = {
    {0, 1},
    {1, 4},
    {2, 3},
    {3, 0},
    {4, 2}};

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (mp_w[a] == b)
      cout << a + 1 << " sheng " << b + 1 << endl;
    if (mp_w[b] == a)
      cout << b + 1 << " sheng " << a + 1 << endl;
    if (mp_l[a] == b)
      cout << a + 1 << " ke " << b + 1 << endl;
    if (mp_l[b] == a)
      cout << b + 1 << " ke " << a + 1 << endl;
  }
  return 0;
}