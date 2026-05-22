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
	int n;
	scanf("%d", &n);
	int cnt = 0;
	while(n --)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a + b + c >= 2) cnt ++;
	}
	printf("%d\n", cnt);
	return 0;
}
