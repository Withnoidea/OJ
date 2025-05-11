#include <iostream>
#include <vector>
using namespace std;

// 高精度加法
vector<int> add(vector<int> &A, vector<int> &B)
{
  vector<int> C;
  for (int i = 0, t = 0; i < A.size() || i < B.size() || t; i++)
  {
    if (i < A.size())
      t += A[i];
    if (i < B.size())
      t += B[i];
    C.push_back(t % 10);
    t /= 10;
  }
  return C;
}

// 高精度乘法
vector<int> mul(vector<int> &A, int b)
{
  vector<int> C;
  for (int i = 0, t = 0; i < A.size() || t; i++)
  {
    if (i < A.size())
      t += A[i] * b;
    C.push_back(t % 10);
    t /= 10;
  }
  return C;
}

int main()
{
  int n;
  cin >> n;
  vector<int> A, res; // A表示阶乘，res表示阶乘之和
  A.push_back(1);     // 将阶乘初始化为1
  res.push_back(0);   // 将阶乘之和初始化为0

  for (int i = 1; i <= n; i++)
  {
    A = mul(A, i);     // 计算i的阶乘
    res = add(A, res); // 计算阶乘之和
  }

  for (int i = res.size() - 1; i >= 0; i--)
    cout << res[i]; // 输出阶乘之和
  return 0;
}