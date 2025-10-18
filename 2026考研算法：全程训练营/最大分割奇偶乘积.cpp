#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
LL oddPrefix[N];
int a[N];

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i ++)
    cin >> a[i];
  
    oddPrefix[0] = 0;
    for(int i = 1; i <= n; i ++)
    {
      oddPrefix[i] = oddPrefix[i - 1] + ((i % 2 == 1) ? a[i] : 0);
    }

    LL maxProduxt = 0;
    LL evenSum = 0;
    for(int k = n; k >= 0; k --)
    {
      maxProduxt = max(maxProduxt, oddPrefix[k] * evenSum);
      if(k % 2 == 0)
      {
        evenSum += a[k];
      }
    }

    cout << maxProduxt << "\n";
    return 0;
}