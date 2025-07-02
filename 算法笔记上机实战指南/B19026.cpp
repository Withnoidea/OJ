#include <iostream>
using namespace std;
int c1, c2, t;

int main()
{
    cin >> c1 >> c2;
    // t = (c2 - c1 + 50) / 100;
    t = c2 - c1;
    if(t % 100 >= 50) t = t / 100 + 1;
    else t = t / 100;
    printf("%02d:%02d:%02d\n", t / 3600, t % 3600 / 60, t % 60);
}