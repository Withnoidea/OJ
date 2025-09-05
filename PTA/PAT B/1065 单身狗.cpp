#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int N = 5e4 + 10;
int  n;
int a[N];
map<string, string> cp;
vector<string> res;
set<string> st;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		string id1, id2;
		cin >> id1 >> id2;
		cp[id1] = id2;
		cp[id2] = id1;
	}
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		string id;
		cin >> id;
		if(cp.count(id) == 0)
		{
			res.push_back(id);
		}
		else
		{
			//有对象判断来没来
			st.insert(id);
		}
	}
	for(auto t:st)
	{
		if(st.count(cp[t])) continue;
		else res.push_back(t);
	}
	sort(res.begin(), res.end());
	cout << res.size() << endl;
	for(int i = 0; i < res.size(); i ++)
	{
		cout << res[i] << " \n"[i == res.size() - 1];
	}
    return 0;
}
