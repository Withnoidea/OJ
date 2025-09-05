#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int N = 1e4 + 10;
int n;
int a[N];
int res;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
    res = a[1];
    for(int i = 2; i <= n; i ++)
    {
        res = (res + a[i]) >> 1;
    }
    cout << res << endl;
    return 0;
}
