#include <iostream>
using namespace std;
int n, cnt;

int main()
{
    cin >> n;
    while(n != 1)
    {
        if(n % 2)
            n = (3 * n + 1) / 2;
        else
             n /= 2;
        cnt ++;
    }
    cout << cnt << endl;
}