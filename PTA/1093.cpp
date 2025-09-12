#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
string a, b;

int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	getline(cin, a);
	getline(cin, b);
	a += b;
	string ans;
    set<char> st;
    for(int i = 0;i < a.size(); i ++)
    {
        if(st.count(a[i])) continue;
        else
        {
            ans += a[i];
            st.insert(a[i]);
        }
    }
    cout << ans << endl;
	return 0;
}
