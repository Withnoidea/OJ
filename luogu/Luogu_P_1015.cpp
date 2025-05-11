#include <bits/stdc++.h>
using namespace std;
int n, m;

int get_reverse(int num)
{
  int res = 0;
  vector<int> rv;
  while (num)
  {
    rv.push_back(num % 10);
    num /= 10;
  }
  for (int i = 0; i < rv.size(); i++)
  {
    res = res * 10 + rv[i];
  }

  return res;
}

bool check(int num)
{
  vector<int> rv;
  int n = num;
  while (num)
  {
    rv.push_back(num % 10);
    num /= 10;
  }
  int rnum = 0;
  for (int i = 0; i < rv.size(); i++)
  {
    rnum = rnum * 10 + rv[i];
  }
  // cout << rnum << endl;
  return rnum == n;
}

int main()
{
  cin >> n;
  cin >> m;
  int num = 0;
  int p = 1;
  while (m)
  {
    num += (m % 10) * p;
    p *= n;
    m /= 10;
  }
  // cout << num << endl;
  // cout << get_reverse(num) << endl;
  // cout << check(num) << endl;
  int step;
  for (step = 1; step <= 30; step++)
  {
    num += get_reverse(num);
    if (check(num))
    {
      cout << "STEP=" << step << endl;
      break;
    }
  }
  if (step > 30)
    cout << "Impossible" << endl;
  return 0;
}
