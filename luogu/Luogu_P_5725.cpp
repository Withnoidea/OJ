#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n * n; i++)
  {
    printf("%02d", i);
    if (i % n == 0)
      puts("");
  }
  cout << endl;
  int k = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j <= n - i)
        cout << "  ";
      else
      {
        printf("%02d", k++);
      }
    }
    cout << endl;
  }
  return 0;
}

// 1 8
// 2 6
// 3 4
// 4 2
// 5 0