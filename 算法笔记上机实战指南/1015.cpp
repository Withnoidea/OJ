#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int n, l, h;
struct node
{
  string id;
  int d, c;
};

bool cmp(node a, node b)
{
  if((a.c + a.d) != (b.c + b.d)) return (a.c + a.d ) > (b.c + b.d);
  else if(a.d != b.d) return a.d > b.d;
  else return a.id < b.id;
}

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> l >> h;
  vector<node> res[4];
  int cnt = n;
  for(int i = 1; i <= n; i ++)
  {
    string id;
    int d, c;
    cin >> id >> d >> c;
    if(d < l || c < l)
      cnt --;
    else if(d >= h && c >= h)
      res[0].push_back(node{id, d, c});
    else if(d >= h && c < h)
      res[1].push_back(node{id, d, c});
    else if(d < h && c < h && d >= c)
      res[2].push_back(node{id, d, c});
    else
      res[3].push_back(node{id, d, c});
  }
  cout << cnt << endl;
  
  for(int i = 0; i < 4; i ++)
  {
    sort(res[i].begin(), res[i].end(), cmp);
    for(int j = 0; j < res[i].size(); j ++)
      cout << res[i][j].id << " " << res[i][j].d << " " << res[i][j].c << "\n";
  }
  return 0;
}
