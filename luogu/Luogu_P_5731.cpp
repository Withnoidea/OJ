#include <bits/stdc++.h>
using namespace std;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n;
int a[10][10];

int main()
{
  cin >> n;
  int x = 1, y = 1; // 当前位置
  int dir = 0;      // 当前方向（初始为右）
  for (int i = 1; i <= n * n; i++)
  {
    a[x][y] = i;
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    // 如果下一个位置越界或已访问，则改变方向
    if (nx < 1 || nx > n || ny < 1 || ny > n || a[nx][ny])
    {
      dir = (dir + 1) % 4; // 切换方向
      nx = x + dx[dir];
      ny = y + dy[dir];
    }
    x = nx;
    y = ny;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      // cout << a[i][j] << " \n"[j == n];
      printf("%3d", a[i][j]);
      if (j == n)
        puts("");
    }
  }
}
