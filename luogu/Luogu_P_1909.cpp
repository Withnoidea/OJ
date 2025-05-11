#include <bits/stdc++.h>
using namespace std;
int n;
struct Data
{
  int cnt;
  int sale;
} d[3];

int main()
{
  cin >> n;
  for (int i = 0; i < 3; i++)
  {
    cin >> d[i].cnt >> d[i].sale;
  }

  int res = INT_MAX; // 初始化为极大值
  for (int i = 0; i < 3; i++)
  {
    int required = (n + d[i].cnt - 1) / d[i].cnt; // 计算所需包数
    int cost = required * d[i].sale;
    res = min(res, cost); // 更新最小花费
  }
  cout << res << endl;
  return 0;
}