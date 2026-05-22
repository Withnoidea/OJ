#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
string p1, p2;
int p, n;

int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> p >> n;
	for(int i = 0; i < n; i ++)
	{
		cin >> p1 >> p2;
		bool f = true;
		for(int i = 0; i < 11; i ++)
		{
			if(i == p - 1) continue;
			if(p1[i] != p2[i])
			{
				cout << 0 << endl;
				f = false;
				break;
			}
		}
		if(f)
			cout << 1 << endl;
	}
	return 0;
}
