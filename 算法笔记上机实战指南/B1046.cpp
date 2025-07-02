#include <iostream>
using namespace std;
int failA, failB;
int n;

int main()
{
    cin >> n;
    while(n --)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if(a1 + b1 == a2 && a1 + b1 != b2) failB ++;
        if(a1 + b1 == b2 && a1 + b1 != a2) failA ++;
    }
    cout << failA << " " << failB << endl;

    return 0;
}