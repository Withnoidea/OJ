#include <iostream>
#include <cstring>
using namespace std;
typedef long long LL;
LL PA, PB, A, DA, B, DB;;
int main()
{
    cin >> A >> DA >> B >> DB;
    while(A)
    {
        int x = A % 10;
        if(x == DA) PA = PA * 10 + DA;
        A /= 10;
    }
    while(B)
    {
        int x = B % 10;
        if(x == DB) PB = PB * 10 + DB;
        B /= 10;
    }
    cout << PA + PB << endl;
    return 0;
}