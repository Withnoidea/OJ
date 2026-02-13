#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;

int f(int n)
{
  int t = 0;
  while (n)
  {
    t += (n % 10) * (n % 10);
    n /= 10;
  }
  return t;
}

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n;
  cin >> n;
  set<int> st;
  while (n > 1)
  {
    if (st.find(n) != st.end())
    {
      cout << "No\n";
      return 0;
    }
    st.insert(n);
    n = f(n);
  }
  cout << "Yes";
  return 0;
}