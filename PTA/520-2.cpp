#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
int stage, money;

int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> stage >> money;
	if(stage == 1)
	{
		if(money > 1000) cout << "zhu guang wan can";
		else cout << "he ka fei";
	}
	else if(stage == 2)
	{
		if(money > 10000 ) cout << "hao hua ying yuan VIP bao chang";
		else cout << "gong yuan ye can";
	}
	else
	{
		if(money > 200) cout << "chi huo guo";
		else cout << "shai tai yang";
	}
	return 0;
}
