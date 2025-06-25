#include <iostream>
using namespace std;
const int N = 110;
int a[N];
int n, m;

int main()
{
    scanf("%d %d", &n, &m);
    m %= n;
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    for(int i = n - m; i < n; i ++)
        cout << a[i] << " ";
    for(int i = 0; i < n - m; i ++)
        cout << a[i] << " \n"[ i == n - m - 1];
    return 0;
}