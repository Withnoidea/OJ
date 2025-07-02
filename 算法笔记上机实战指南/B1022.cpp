#include <iostream>
#include <vector>
using namespace std;
typedef long long LL;
const int N = 100;
LL a, b, d;
int res[N];

int main()
{
    cin >> a >> b >> d;
    a += b;
    if(a == 0) 
    {
        cout << 0 << endl;
        return 0;
    }
    int i = 0;
    while(a)
    {
        res[i ++] = a % d;
        a /= d;
    }
    for(int j = i-1; j >= 0; j --)
		printf("%d",res[j]);
    cout << endl;
    return 0;
}