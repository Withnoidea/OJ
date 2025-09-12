#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;


int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	double n;
	double PI = 3.1415927;
	while(cin >> n)
	{
		printf("%.3lf\n", PI * n * n * n * 4 / 3);
	}
	return 0;
}
