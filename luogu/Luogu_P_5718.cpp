#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int n;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << *min_element(a, a + n) << endl;
  return 0;
}
