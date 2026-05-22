#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
int a[N];
int l, n;

int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> l >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	int idx = 0;
	int res = 2e8;
	int s;
	for(int i = 1; i + l <= n; i ++)
	{
		int s = a[i + l - 1] - a[i - 1];
		if(s < res)
		{
			idx = i;
			res = s;
		}
	}
	cout << idx << ' ' << a[idx + l - 1] - a[idx - 1] << endl;
	return 0;
}
