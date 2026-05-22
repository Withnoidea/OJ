#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
string s;
char c1, c2;

int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> s;
	cin >> c1 >> c2;
	int idx = 0;
	string res;
	while(idx < s.size())
	{
		if(s[idx] == c1)
		{
			string tmp;
			int end = idx + 1;
			while(s[end] != c2 && end < s.size()) 
			{
				tmp += s[end];
				end ++;
			}
			if(end < s.size())
			{
				res += tmp;
				tmp = "";
				idx = end + 1;
			}
		}
		idx ++;
	}
	cout << res << endl;
	return 0;
}
