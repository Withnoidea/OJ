#include <iostream>
using namespace std;
typedef long long LL;
const int N = 1010, MOD = 1e9 + 7;
LL c[N][N];
int n;

int main()
{
  cin >> n;
  for(int i = 0; i <= n; i ++)
  {
    for(int j = 0; j <= n; j ++)
    {
      if(!j) c[i][j] = 1;
      else c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
    }
  }
  
  LL res = 0;
  for(int k = 2; k <= n - 2; k ++)
  {
    res = (res + (LL)c[n - 1][k] * (k - 1) * (n - k - 1)) % MOD;
  }
  cout << res << endl;
  return 0;
}