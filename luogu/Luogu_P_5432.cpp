#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &A, vector<int> &B)
{
  if (A.size() != B.size())
    return A.size() > B.size();
  for (int i = A.size() - 1; i >= 0; i--)
    if (A[i] != B[i])
      return A[i] > B[i];
  return true;
}

vector<int> sub(vector<int> &A, vector<int> &B) // C = A - B, 满足A >= B, A >= 0, B >= 0
{
  vector<int> C;
  for (int i = 0, t = 0; i < A.size(); i++)
  {
    t = A[i] - t;
    if (i < B.size())
      t -= B[i];
    C.push_back((t + 10) % 10);
    if (t < 0)
      t = 1;
    else
      t = 0;
  }

  while (C.size() > 1 && C.back() == 0)
    C.pop_back();
  return C;
}

// 高精度除法函数
// 参数：A - 被除数，B - 除数，r - 余数（通过引用返回）
// 返回值：商（vector<int>形式）
vector<int> div(vector<int> &A, vector<int> &B, vector<int> &r)
{
  vector<int> C; // 用于存储商

  // 情况1：如果被除数A小于除数B，商为0，余数就是A
  if (!cmp(A, B))
  { // cmp是比较函数，判断A是否>=B
    C.push_back(0);
    r.assign(A.begin(), A.end()); // 余数r设为A
    return C;
  }

  int j = B.size(); // 除数位数
  // 初始时，从A的末尾取与B相同位数的部分作为初始余数
  r.assign(A.end() - j, A.end());

  // 从右向左处理被除数A的每一位
  while (j <= A.size())
  {
    int k = 0; // 当前位的商

    // 计算当前余数r可以减去除数B多少次
    while (cmp(r, B))
    {                // 只要r >= B
      r = sub(r, B); // 余数r减去B
      k++;           // 商k加1
    }

    // 将当前位的商加入结果
    C.push_back(k);

    // 如果还有未处理的数字，从被除数中取下一位
    if (j < A.size())
      r.insert(r.begin(), A[A.size() - j - 1]);

    // 去除余数前导零（如果有）
    if (r.size() > 1 && r.back() == 0)
      r.pop_back();

    j++; // 处理下一位
  }

  // 由于我们是按从高位到低位计算的，需要反转结果
  reverse(C.begin(), C.end());

  // 去除商的前导零（如果有）
  while (C.size() > 1 && C.back() == 0)
    C.pop_back();

  return C; // 返回商
}
int main()
{
  string a, b;
  vector<int> A, B, C, R;
  cin >> a >> b;
  for (int i = a.size() - 1; i >= 0; i--)
    A.push_back(a[i] - '0');
  for (int i = b.size() - 1; i >= 0; i--)
    B.push_back(b[i] - '0');
  C = div(A, B, R);
  for (int i = C.size() - 1; i >= 0; i--)
    cout << C[i];
  cout << endl;
  for (int i = R.size() - 1; i >= 0; i--)
    cout << R[i];
  cout << endl;
  return 0;
}