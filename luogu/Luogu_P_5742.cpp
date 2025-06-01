#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
struct student
{
  int id, score1, score2;
} s[N];
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> s[i].id >> s[i].score1 >> s[i].score2;
    if (s[i].score1 * 7 + s[i].score2 * 3 >= 800 && s[i].score1 + s[i].score2 > 140)
      puts("Excellent");
    else
      puts("Not excellent");
  }
  return 0;
}