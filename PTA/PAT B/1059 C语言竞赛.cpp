#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
string a[N];
int type[N];
bool is_send[N];
int n;
map<string, int> mp;

bool is_prime(int x)
{
    if(x < 2) return false;
    for(int i = 2; i <= x / i; i ++)
    {
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    cin >> n;
    type[1] = 2;
    for(int i = 1; i <= n; i ++)
    {
        string id;
        cin >> id;
        mp[id] = i;
        // cout << mp[id] << endl;
        if(is_prime(i))
            type[i] = 1;
    }
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        string id;
        cin >> id;
        int rk = -1;
        // cout << id << endl;
        // cout << mp[id] << endl;
        if(mp.count(id)) rk = mp[id];
        else
        {
            cout << id << ": " << "Are you kidding?" << endl;
            continue;
        }
        
        if(is_send[rk] == false)
        {
            is_send[rk] = true;
            if(type[rk] == 2) cout << id << ": " << "Mystery Award" << endl;
            else if(type[rk] == 1) cout << id << ": " << "Minion" << endl;
            else cout << id << ": " << "Chocolate" << endl;
        }
        else
        {
            cout << id << ": " << "Checked" << endl;
        }
    }

    return 0;
}