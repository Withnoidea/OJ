#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 100010;
int e[N], ne[N], h, n, k;

int main()
{
    cin >> h >> n >> k;
    while (n -- )
    {
        int address, data, next;
        cin >> address >> data >> next;
        e[address] = data, ne[address] = next;
    }

    vector<int> a, b, c;
    for(int i = h; i != -1; i = ne[i])
    {
        int w = e[i];
        if(w < 0) a.push_back(i);
        else if(w <= k) b.push_back(i);
        else c.push_back(i);
    }

    a.insert(a.end(), b.begin(), b.end());
    a.insert(a.end(), c.begin(), c.end());

    for(int i = 0; i < a.size(); i ++)
    {
        printf("%05d %d ", a[i], e[a[i]]);
        if((i + 1) == a.size()) puts("-1");
        else printf("%05d\n", a[i + 1]);
    }

    return 0;
}