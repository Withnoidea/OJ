#include <bits/stdc++.h>
using namespace std;
int n;
string pre, op;
int a, b;

int calLen(int a, int b, int c)
{
  int res = 0;
  if (!a)
    res++;
  else
  {
    if(a < 0)
    {
      a = -a;
      res ++;
    }
    while (a)
    {
      a /= 10;
      res++;
    }
  }
  if (!b)
    res++;
  else
  {
    if(b < 0)
    {
      b = -b;
      res ++;
    }
    while (b)
    {
      b /= 10;
      res++;
    }
  }
  if (!c)
    res++;
  else
  {
    if(c < 0)
    {
      c = -c;
      res ++;
    }
    while (c)
    {
      c /= 10;
      res++;
    }
  }
  return res + 2;
}

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> op;
    if (op != "a" && op != "b" && op != "c")
    {
      a = stoi(op);
      op = pre;
      cin >> b;
    }
    else
    {
      cin >> a >> b;
      pre = op;
    }
    // cout << op << a << b << endl;
    if (op == "a")
    {
      printf("%d+%d=%d\n", a, b, a + b);
      cout << calLen(a, b, a + b) << endl;
    }
    else if (op == "b")
    {
      printf("%d-%d=%d\n", a, b, a - b);
      cout << calLen(a, b, a - b) << endl;
    }
    else
    {
      printf("%d*%d=%d\n", a, b, a * b);
      cout << calLen(a, b, a * b) << endl;
    }
  }
  return 0;
}