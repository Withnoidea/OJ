#include <bits/stdc++.h>
using namespace std;
int l, k;
string s;
bool flag;

bool is_prime(long long num)
{
    if(num < 2) return false;
    for(long long i = 2; i <= num / i; i ++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cin >> l >> k;
    cin >> s;
    if(k > l)
    {
        puts("404");
        return 0;
    }
    for(int i = 0; i < s.size() - k + 1; i ++)
    {
        long long num = stoll(s.substr(i, k));
        // cout << s.substr(i, k) << endl;
        if(is_prime(num))
        {
            flag = true;
            cout << s.substr(i, k) << endl;
            break;
        }
    }
    if(flag == false) puts("404");
    return 0;
}