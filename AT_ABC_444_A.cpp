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
  int num;
  cin >> num;
  if (num % 10 == num / 10 % 10 && num % 10 == num / 100)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}