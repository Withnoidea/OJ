#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
int n;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	string even = "-1 2";
	string odd = "-1 3";
	while(n --)
	{
		int x;
		cin >> x;
		if(x % 2 == 0)
			if(x == 2)
			{
				cout << even << "\n";
			}
			else
			{
				int t = x / 2;
				for(int i = 1; i <= t - 1; i ++) cout << odd <<  " ";
				cout << even << "\n";
		}
		else
		{
			int t = x / 2;
			for(int i = 1; i <= t; i ++ ) cout << odd << " ";
			cout << "-1\n";
		}
	}
    return 0;
}
//-1 2                    2//
//-1 3 -1                 3
//-1 3 -1 2               4//
//-1 3 -1 3 -1            5
//-1 3 -1 3 -1 2          6//
//-1 3 -1 3 -1 3 -1       7