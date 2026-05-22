#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
int n;


int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	vector<int> res;
	for(int i = 1; i <= n; i ++)
	{
		int x;
		cin >> x;
		if(x == 0)
			res.push_back(i);
	}
	for(int i = 0; i < res.size(); i ++)
		cout << res[i] << " \n"[i == res.size() - 1];
	return 0;
}
