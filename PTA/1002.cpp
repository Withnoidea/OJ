#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1010;
double a[N];
int k1;

int main()
{
	scanf("%d", &k1);
	for(int i = 0; i < k1; i ++)
	{
		int e;
		double c;
		cin >> e >> c;
		a[e] += c;
	}
	scanf("%d", &k1);
	for(int i = 0; i < k1; i ++)
	{
		int e;
		double c;
		cin >> e >> c;
		a[e] += c;
	}
	int cnt = 0;
	for(int i = 0; i <= 1000; i ++)
	{
		if(a[i] != 0) cnt ++;
	}
	
	printf("%d", cnt);
	for(int i = 1000; i >= 0; i --)
	{
		if(a[i] != 0)
		{
			printf(" %d %.1lf", i, a[i]);
		}
	}
	return 0;
}
