#include <bits/stdc++.h>
using namespace std;

bool solve(int num)
{
  int t = num;
  int k = 0;
  while(t)
  {
    t /= 10;
    k ++;
  }
  if(num % k == 0) return true;
  else return false;
}

int n;

int main()
{
  cin >> n;
  while(n --)
  {
    int x;
    cin >> x;
    cout << (solve(x) ? "Yes" : "No") << endl;
  }
  return 0;
}