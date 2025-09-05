#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int N = 1e4 + 10;
int n;
int a[N], b[N];

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	while(n --)
	{
		int len;
		cin >> len;
		for(int i = 0; i < len; i ++) cin >> a[i];
		for(int i = 0; i < len; i ++) cin >> b[i];
		int cnt = 0;
		bool op1 = true;
		bool op2 = true;
		while(1)
		{
			for(int i = 0; i < len; i ++)
			{
				if(a[i] > b[i] && op1)
				{
					op1 = false;
					a[i] --;
				}
				else if(a[i] < b[i] && op2)
				{
					op2 = false;
					a[i] ++;
				}
			}
//			for(int i = 0; i < len; i ++) cout << a[i] << " \n"[i == len - 1];
			cnt ++;
			if(op1) break;
			op1 = true;
			op2 = true;
		}
		cout << cnt << "\n";
	}
    return 0;
}
