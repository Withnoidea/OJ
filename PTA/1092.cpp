#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int n, m;

int main()
{
    cin >> m >> n;
    while(n --)
    {
        for(int i = 0; i < m; i ++)
        {
            int x;
            cin >> x;
            a[i] += x;
        }
    }
    int cnt = 0;
    for(int i = 0; i < m; i ++)
    {
        cnt = max(cnt, a[i]);
    }
    cout << cnt << endl;
    bool flag = false;
    for(int i = 0; i < m; i ++)
    {
        if(a[i] == cnt)
        {
            if(flag) cout << " ";
            flag = true;
            cout << i + 1;
        }
    }

    return 0;
}