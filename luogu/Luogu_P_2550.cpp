#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int win[10], gess[10];
int res[10]; // res[0] unused, res[1]~res[7]对应六等奖到特等奖
bool st[N];
int n;

int main()
{
  cin >> n;
  for (int i = 0; i < 7; i++)
  {
    cin >> win[i];
  }

  while (n--)
  {
    memset(st, false, sizeof(st)); // 初始化st数组

    int cnt = 0;
    for (int i = 0; i < 7; i++)
    {
      cin >> gess[i];
    }

    for (int i = 0; i < 7; i++)
    {
      for (int j = 0; j < 7; j++)
      {
        if (win[i] == gess[j] && !st[win[i]])
        {
          st[win[i]] = true;
          cnt++;
        }
      }
    }
    res[cnt]++;
  }

  // 输出顺序：特等奖(7)，一等奖(6)...六等奖(1)
  for (int i = 7; i >= 1; i--)
    cout << res[i] << " ";
  cout << endl;

  return 0;
}