#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int n;

int main()
{
  cin >> n;
  for(int i = 1; i <= n; i ++)
    cin >> a[i];
  int left = 1;
  int right = n;
  int curMax = n;
  while(left <= right)
  {
    if(a[left] == curMax) left ++;
    else if(a[right] == curMax) right --;
    else
    {
      cout << "No\n";
      return 0;
    }
    curMax --;
  }
  cout << "Yes\n";
  return 0;
}