#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
LL a, b;

int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 	cin >> a >> b;
 	bool flag = false;
 	for(LL res = b; res >= a; res --)
 	{
 		for(LL m = res - 1; m >= 1; m --)
 		{
 			LL n = res - m;
 			if((1LL * (m + 1) * m + 1LL * (n + 1) * n) % (1LL * m * n) == 0)
			{
				cout << res << endl;
			 	return 0;
			}	
		}
	}
	cout << 0 << endl;
	return 0;
}
