#include <bits/stdc++.h>
using namespace std;

struct State
{
  unsigned int a[6];
  string path;
};

string find_string(int n)
{
  queue<State> q;
  State initial;
  initial.a[1] = 1;
  for (int i = 2; i <= 5; ++i)
    initial.a[i] = 0;
  initial.path = "";
  q.push(initial);

  while (!q.empty())
  {
    State current = q.front();
    q.pop();

    if (current.a[1] == n)
    {
      return current.path;
    }

    if (current.path.length() >= 200)
    {
      continue;
    }

    // Try adding 'L'
    State nextL;
    for (int i = 1; i <= 5; ++i)
      nextL.a[i] = 0;
    nextL.a[2] += current.a[1] + current.a[3] + current.a[4];
    nextL.a[4] += current.a[5] + current.a[2];
    nextL.path = current.path + 'L';
    q.push(nextL);

    // Try adding 'R'
    State nextR;
    for (int i = 1; i <= 5; ++i)
      nextR.a[i] = 0;
    nextR.a[1] += current.a[2];
    nextR.a[3] += current.a[1] + current.a[5];
    nextR.a[4] += current.a[2] + current.a[3];
    nextR.a[5] += current.a[2] + current.a[4];
    nextR.path = current.path + 'R';
    q.push(nextR);
  }

  return "-1";
}

int main()
{
  int n;
  cin >> n;
  string result = find_string(n);
  cout << result << endl;
  return 0;
}