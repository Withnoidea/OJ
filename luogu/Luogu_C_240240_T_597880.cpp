#include <iostream>
#include <queue>
#include <unordered_set>
#include <algorithm>
using namespace std;

int digit_sum(long long num)
{
  int sum = 0;
  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int find_min_digit_sum(int y)
{
  if (y == 0)
  {
    return 0; // x=0, 0^2=0, digit sum 0
  }
  using State = pair<long long, int>; // (current number, its digit sum)
  queue<State> q;
  unordered_set<long long> visited;

  for (int x = 1; x <= 9; ++x)
  {
    q.push({x, x});
    visited.insert(x);
  }

  while (!q.empty())
  {
    auto current = q.front();
    q.pop();
    long long x = current.first;
    int s = current.second;

    long long x_squared = x * x;
    int ds = digit_sum(x_squared);
    if (ds == y)
    {
      return s;
    }

    for (int d = 0; d <= 9; ++d)
    {
      long long next_x = x * 10 + d;
      int next_s = s + d;
      if (next_x > 1e9)
      {
        continue;
      }
      if (visited.find(next_x) == visited.end())
      {
        visited.insert(next_x);
        q.push({next_x, next_s});
      }
    }
  }
  return -1;
}

int main()
{
  int y;
  cin >> y;
  if (y == 0)
  {
    cout << 0 << endl;
    return 0;
  }
  int result = find_min_digit_sum(y);
  cout << result << endl;
  return 0;
}