// 11 12 13
// 21 22 23
// 31 32 33

// 31   21   11
// 32   22   12
// 33   23   13
// 12 21
#include <bits/stdc++.h>
using namespace std;
const int N = 15;
char a[N][N], b[N][N], backup_a[N][N], backup_aa[N][N];
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      cin >> a[i][j];

  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      cin >> b[i][j];

  memcpy(backup_a, a, sizeof a);
  // for(int i = 1; i <= n; i ++)
  //   for(int j = 0; j < n; j ++)
  //     cout << b[i][j] << " \n"[j == n - 1];

  bool flag = true;
  // 判断旋转90 180 270

  for (int k = 1; k <= 3; k++)
  {
    flag = true;
    memcpy(backup_aa, backup_a, sizeof backup_a);
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        backup_a[i][j] = backup_aa[n - j + 1][i];
        // cout << backup_a[i][j] << " \n"[j == n];
      }
    }
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (backup_a[i][j] != b[i][j])
        {
          flag = false;
          break;
        }
      }
    }
    if (flag)
    {
      cout << k << endl;
      return 0;
    }
  }
  // 反转
  flag = true;
  memcpy(backup_a, a, sizeof a);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n / 2; j++)
    {
      swap(backup_a[i][j], backup_a[i][n - j + 1]);
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (backup_a[i][j] != b[i][j])
      {
        flag = false;
        break;
      }
    }
  }
  if (flag)
  {
    cout << 4 << endl;
    return 0;
  }
  else
  {
    // 组合
    
    for (int k = 1; k <= 3; k++)
    {
      flag = true;
      memcpy(backup_aa, backup_a, sizeof backup_a);
      for (int i = 1; i <= n; i++)
      {
        for (int j = 1; j <= n; j++)
        {
          backup_a[i][j] = backup_aa[n - j + 1][i];
          // cout << backup_a[i][j] << " \n"[j == n];
        }
      }

      for (int i = 1; i <= n; i++)
      {
        for (int j = 1; j <= n; j++)
        {
          if (backup_a[i][j] != b[i][j])
          {
            flag = false;
            break;
          }
        }
      }
      if (flag)
      {
        cout << 5 << endl;
        return 0;
      }
    }
  }
  flag = true;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (a[i][j] != b[i][j])
      {
        flag = false;
        break;
      }
    }
  }
  if (flag)
  {
    cout << 6 << endl;
    return 0;
  }

  cout << 7 << endl;
  return 0;
}