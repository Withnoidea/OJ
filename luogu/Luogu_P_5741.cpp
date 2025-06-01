#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int score[N][10];
string names[N];
int n;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> names[i];
    for (int j = 1; j <= 3; j++)
      cin >> score[i][j];
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (abs(score[i][1] - score[j][1]) > 5)
        continue;
      if (abs(score[i][2] - score[j][2]) > 5)
        continue;
      if (abs(score[i][3] - score[j][3]) > 5)
        continue;
      if (abs((score[i][1] + score[i][2] + score[i][3]) - (score[j][1] + score[j][2] + score[j][3])) > 10)
        continue;
      cout << names[i] << " " << names[j] << endl;
    }
  }
  return 0;
}