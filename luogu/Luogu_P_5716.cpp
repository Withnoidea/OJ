#include <bits/stdc++.h>
using namespace std;
int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
  int n, m;
  cin >> n >> m;
  months[2] += ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
  cout << months[m];
}