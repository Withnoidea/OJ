#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  int lastans = 0;

  while (q--)
  {
    int x_prime, y_prime;
    cin >> x_prime >> y_prime;

    int x = (x_prime - 1 + lastans) % n;
    int y = (y_prime - 1 + lastans) % n;

    swap(a[x], a[y]);

    int l = n, r = -1;
    for (int i = 0; i < n; ++i)
    {
      if (a[i] != i + 1)
      {
        if (i < l)
          l = i;
        if (i > r)
          r = i;
      }
    }

    if (l > r)
    {
      lastans = 0;
    }
    else
    {
      lastans = (r - l + 1) * (r - l + 1);
    }

    cout << lastans << '\n';
  }

  return 0;
}