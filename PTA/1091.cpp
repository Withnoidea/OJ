#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
    cin >> n;
    while(n --)
    {
        bool flag = false;
        int num;
        cin >> num;
        int k  = 10;
        for(int i = 1; i < to_string(num).size(); i ++) k *= 10;
        // cout << k << endl;
        for(int i = 1; i < 10; i ++)
        {
            if(num * num * i % k == num)
            {
                flag = true;
                cout << i << " " << num * num * i << endl;
                break;
            }
        }
        if(flag == false)
            puts("No");
    }
    return 0;
}