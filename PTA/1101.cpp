#include <bits/stdc++.h>
using namespace std;
int a, b;

int main()
{
    cin >> a >> b;
    string res = to_string(a + b);
    int len = res.size();
    for(int i = 0; i < len; i ++)
    {
        cout << res[i];
        if(res[i] == '-') continue;
        if((i + 1) % 3 == len % 3 && i != len - 1) cout << ",";
    }
    return 0;
}