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
  
  for(int i = 1, j = n; i < j; )
  {
    // cout << a[i] << " " << a[j] << "\n";
    if(a[i] < a[j])
    {
      if(a[j] - 1 == a[i] || a[j] - 1 == a[j - 1])
      {
        j --;
      }
      else
      {
        cout << "No" << "\n";
        return 0;
      }
    }
    else
    {
      if(a[i] - 1 == a[i + 1] || a[i] - 1 == a[j])
      {
        i ++;
      }
      else
      {
        cout << "No" << "\n";
        return 0;
      }
    }
  }
  cout << "Yes" << "\n";
  return 0;
}