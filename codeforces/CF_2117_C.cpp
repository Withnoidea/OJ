#include <bits/stdc++.h>
using namespace std;
int t;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> now, last;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        now.insert(a[i]);
        last.erase(a[i]);
        if (!last.size())
        {
            ans++;
            last = now;
            now.clear();
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
    cin >> t;
    while (t--)
        solve();
    return 0;
}
// 1 2 2 3 1 5
// 1 2 2 3 3 4
// 1 1 1 2 2 3
// 1 2