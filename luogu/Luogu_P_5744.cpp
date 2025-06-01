#include <bits/stdc++.h>
using namespace std;
string name;
int age, score;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    cin >> name >> age >> score;
    if(score * 120 / 100 <= 600)
    cout << name << " " << age + 1 << " " << score * 120 / 100 << endl;
    else
    {
      cout << name << " " << age + 1 << " " << 600 << endl;
    }
  }
  return 0;
}