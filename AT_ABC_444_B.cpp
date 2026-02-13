#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    string num = to_string(i);
    int sum = 0;
    for (int j = 0; j < num.size(); j++)
    {
      sum += (num[j] - '0');
    }
    if (sum == k)
      ans++;
  }
  cout << ans << endl;
  return 0;
}