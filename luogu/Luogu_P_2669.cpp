#include <iostream>
// 反对万能头！
using namespace std;
int n, q, c, s;
// n是有多少天
// s是获得的金币总量
// c是每天能获得的金币数
// q表示往后数q天，获得的金币都是c个
int main()
{
  cin >> n;
  c = q = 1;                   // 第一天（往后的一天），获得1个金币
  for (int i = 1; i <= n; i++) // 要发n天金币
  {
    s += c;     // 累加
    q--;        // 已经发了一天
    if (q == 0) // 要更新数据
    {
      c++;   // 每天获得金币的数量+1
      q = c; // 根据题意，以后的c天都是c个金币，q就是c
    }
  }
  cout << s; // 输出
  return 0;  // THE END
}