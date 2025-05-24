// lreja 
// goaxn 
#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int n;

void solv()
{
    int c[N] = {0};
    bool st[1010];
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i ++)
        a[i] = tolower(a[i]);
    for(int i = 0; i < b.size(); i ++)
        b[i] = tolower(b[i]);
    for(int i = 0; i < a.size(); i ++)
        c[a[i] - 'a'] ++;
    for(int j = 0; j < b.size(); j ++)
        c[b[j] - 'a'] ++;
    if(a.size() != b.size())
    {
        puts("bull pay");
        return;
    }
    else
    {
        int cnt = 0;
        for(int i = 0; i < a.size(); i ++)
        {
            if(a[i] == b[i])
            {
                cnt ++;
                st[i] = true;
            }
        }
        if(cnt >= 4)
        {
            puts("how pay");
            return;
        }
        if(cnt == 3)
        {
            int k = 0;
            for(int i = 0; i < a.size(); i ++)
            {
                if(c[a[i] - 'a'] >= 2 && st[i] == false)
                    k ++;
            }
            if(k >= 1)
            {
                puts("how pay");
            }
            else
            {
                puts("bull pay");
            }
            return ;
        }
        if(cnt == 2)
        {
            int k = 0;
            for(int i = 0; i < a.size(); i ++)
            {
                if(c[a[i] - 'a'] >= 2 && st[i] = false)
                    k ++;
            }
            if(k >= 2)
            {
                puts("how pay");
            }
            else
            {
                puts("bull pay");
            }
            return ;
        }
        if(cnt < 2)
        {
            puts("bull pay");
            return;
        }
    }
}

int main()
{
    cin >> n;
    while(n --)
    {
        solv();
    }

    return 0;
}