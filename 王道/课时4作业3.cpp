#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int res = 0;
  for (int i = 10; i <= 100; i += 10)
  {
    int a = i / 10;
    for (int j = 5; j <= 100 - i; j += 5)
    {
      int b = j / 5;
      for (int k = 2; k <= 100 - i - j; k += 2)
      {
        int c = k / 2;
        for (int l = 1; l <= 100 - i - j - k; l++)
        {
          if (a + b + c + l == 40 && i + j + k + l == 100)
            res++;
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}
