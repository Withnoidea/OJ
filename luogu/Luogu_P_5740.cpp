#include <bits/stdc++.h>
using namespace std;
string name, res_name;
int a, b, c;
int res_a, res_b, res_c, max_sum;
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> name;
    if (i == 1) // 初始化答案姓名
      res_name = name;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum > max_sum)
    {
      max_sum = sum;
      res_name = name;
      res_a = a;
      res_b = b;
      res_c = c;
    }
  }
  cout << res_name << " " << res_a << " " << res_b << " " << res_c << endl;
  return 0;
}