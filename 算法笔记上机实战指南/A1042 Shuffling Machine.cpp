#include <iostream>
using namespace std;
const int N = 60;
char mp[5] = {'S', 'H', 'C', 'D', 'J'};
int Start[N], End[N], Next[N];
int k;

int main()
{
    cin >> k;
    for(int i = 1; i <= 54; i ++) Start[i] = i;
    
    for(int i = 1; i <= 54; i ++) cin >> Next[i];

    for(int step = 1; step <= k; step ++)
    {
        for(int i = 1; i <= 54; i ++)
        {
            End[Next[i]] = Start[i];
        }
        for(int i = 1; i <= 54; i ++)
        {
            Start[i] = End[i];
        }
    }

    for(int i = 1; i <= 54; i ++)
    {
        if(i != 1) printf(" ");
        Start[i] --;
        printf("%c%d", mp[Start[i] / 13], Start[i] % 13 + 1);
    }

    return 0;
}