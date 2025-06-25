  #include <bits/stdc++.h>
  using namespace std;
  map<int, int> mp;
  int a1, b1, a2, b2, a3, b3, c;

  int main()
  {
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> c;
    int t = max(b1, max(b2, b3));
    // cout << t << endl
    //  << endl;
    int res = 0, idx = 1;
    int c1 = a1 - (t - b1) * c;
    res = c1;
    int c2 = a2 - (t - b2) * c;
    if (res > c2)
    {
      res = c2;
      idx = 2;
    }
    int c3 = a3 - (t - b3) * c;
    if (res > c3)
    {
      res = c3;
      idx = 3;
    }
    cout << idx << " " << res << endl;

    return 0;
  }