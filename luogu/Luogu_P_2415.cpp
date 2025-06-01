// 2

// 2 3
// 2 3 23

// 2 3 4
// 2 3 4 23 24 34 234
// 4 4 4

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1010;
LL cnt, s, num;
LL nums[N];

int main()
{
  while (cin >> num)
  {
    cnt++;
    nums[cnt] = num;
    s += num;
  }
  s *= pow(2, cnt - 1);

  cout << s << endl;
  return 0;
}