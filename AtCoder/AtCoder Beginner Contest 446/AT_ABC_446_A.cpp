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
  string s;
  cin >> s;
  cout << "Of";
  s[0] = s[0] - 'A' + 'a';
  cout << s << endl;
  return 0;
}