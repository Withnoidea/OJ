# 13年12月CCF计算机软件能力认证

## [3192. 出现次数最多的数 ](https://www.acwing.com/problem/content/3195/)

给定$n$个正整数，找出它们中出现次数最多的数。
如果这样的数有多个，请输出其中最小的一个。

**输入格式**

输入的第一行只有一个正整数$n$,表示数字的个数。
输入的第二行有$n$个整数$s_1,s_2,\ldots,s_n$ 。
相邻的数用空格分隔。

**输出格式**

输出这$n$个次数中出现次数最多的数。
如果这样的数有多个，输出其中最小的一个。

**数据范围**

$$\begin{aligned}&1\leq n\leq1000,\\&1\leq s_i\leq10000\end{aligned}$$

**输入样例：**

6
10110203020

输出样例：

10

}

**数组模拟**

```c++
#include<bits/stdc++.h>
using namespace std;
const int N = 10010;
int a[N];
int n;

int main()
{
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        a[x] ++;
    }
    int max_cnt = 0, res = 0;
    for(int i = 1; i <= 10000; i ++)
    {
        if(a[i] > a[res])
            res = i;
    }
    cout << res << endl;
    return 0;
}
```

**Map**

```c++
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int mx = N, cnt;
int n;
map<int, int> mp;

int main()
{
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        mp[x] ++;
        if(mp[x] > cnt)
        {
            cnt = mp[x];
            mx = x;
        }
        if(mp[x] == cnt && x < mx)
            mx = x;
    }
    cout << mx << endl;
    return 0;
}
```

## [3193. ISBN号码](https://www.acwing.com/problem/content/3196/)

每一本正式出版的图书都有一个 ISBN 号码与之对应。
ISBN 码包括9位数字、1位识别码和3位分隔符，其规定格式如 x-xxx-xxxxx-x ,其中符号 - 是分隔符 (键盘上的减号),最后一位是识别码，例如 0-670-82162-4 就是一个标准的ISBN码。
ISBN 码的首位数字表示书籍的出版语言，例如0代表英语；第一个分隔符 - 之后的三位数字代表出版社，例如670代表维京出版社；第二个分隔之后的五位数字代表该书在出版社的编号；最后一位为识别码。
识别码的计算方法如下：
首位数字乘以1加上次位数字乘以2........以此类推，用所得的结果mod 11,所得的余数即为识别码，如果余数为 10,则识别码为大写字母$X.$
例如ISBN 号码 0-670-82162-4 中的识别码4是这样得到的：对067082162这 9 个数字，从左至右，分别乘以
$1,2,\ldots,9$,再求和，即$0\times1+6\times2+\ldots\ldots+2\times9=158$,然后取158 mod 11的结果 4 作为识别码。
编写程序判断输入的 ISBN 号码中识别码是否正确，如果正确，则仅输出 Right;如果错误，则输出是正确的ISBN 号码。
输入格式
输入只有一行，是一个字符序列，表示一本书的 ISBN 号码 (保证输入符合 ISBN 号码的格式要求)。
输出格式
输出一行，假如输入的ISBN 号码的识别码正确，那么输出 Right,否则，按照规定的格式，输出正确的 ISBN号码(包括分隔符 -)。
输入样例1：

0-670-82162-4

输出样例1：

Right

输入样例2：

0-670-82162-0

输出样例2：

0-670-82162-4

```c++
#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
    cin >> s;
    string str;
    for(int i = 0; i < s.size() - 1; i ++)
    {
        if(s[i] != '-') str += s[i];
    }
    int res = 0;
    for(int i = 0; i < str.size(); i ++)
    {
        res += (i + 1)  * (str[i] - '0');
    }
    res %= 11;
    if(res == s[s.size() - 1] - '0')
    {
        puts("Right");
    }
    else if(res == 10 && s[s.size() - 1] == 'X')
    {
        puts("Right");
    }
    else
    {
        for(int i = 0; i < s.size() - 1; i ++)
            cout << s[i];
        if(res == 10) cout << 'X' << endl;
        else cout << res << endl;
    }

    return 0;
}
```

## [3194. 最大的矩形](https://www.acwing.com/problem/content/3197/)

在横轴上放了$n$个相邻的矩形，每个矩形的宽度是1，而第$i$ ($1\leq i\leq n$)个矩形的高度是$h_i$。
这$n$个矩形构成了一个直方图。
例如，下图中六个矩形的高度就分别是3，1,6,5,2,3.

![](https://i-blog.csdnimg.cn/blog_migrate/0598f524bd5d7f0f0c068b2cd734c133.png)

请找出能放在给定直方图里面积最大的矩形，它的边要与坐标轴平行。对于上面给出的例子，最大矩形如下图所示的阴影部分，面积是10。

![](https://i-blog.csdnimg.cn/blog_migrate/73f14538951570c7b77c593235fbc229.png)

**输入格式**

第一行包含一个整数$n$,即矩形的数量。
第二行包含$n$个整数$h_1,h_2,\ldots,h_n$ ,相邻的数之间由空格分隔。$h_i$是第$i$个矩形的高度。
输出格式
输出一行，包含一个整数，即给定直方图内的最大矩形的面积。


数据范围

$1\leq n\leq1000$, $1\leq h_i\leq10000$ 经实测$h_i$在官网的实际范围是$1\leq h_i\leq40000$,这与其给出的题面描述不符，属于官网出题人的失误，也因此卡住了一些同学的代码，望大家加以注意。

**输入样例：**

```
6
3 1 6 5 2 3
```

**输出样例：**

```
10
```

思路：不难发现矩形的高一定会和直方图中某个柱子的高度一样，枚举矩形的高，判断以当前高所能组成的最宽的矩形，计算答案即可。

```c++
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int h[N];
int n;
int res;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i ++)
        cin >> h[i];
    
    for(int i = 1; i <= n; i ++)
    {
        int l, r;
        for(int j = i; j >=1; j --)
        {
            if(h[i] > h[j]) break;
            l = j;
        }
        for(int j = i; j <= n; j ++)
        {
            if(h[i] > h[j]) break;
            r = j;
        }
        res = max(res, h[i] * (r - l + 1));
    }
    cout << res << endl;
    return 0;
}

```

## [3195. 有趣的数 ](https://www.acwing.com/problem/content/3198/)

0 和 1没有位置限制，考虑0，1的位置，0 或者1不可以放在第一个位置，0不可以因为0不能放在开头，1不可以放在第一个位置因为0在1前面，所以就是在后面n-1个位置选k个0，1，选k个0，1这里的意思是，0和1的总数是k，且至少有一个0，至少有一个1，在k个0，1中，设0的数量为t，应在所有的1前面， 1<=  t <= k-1, k 位01，一共k-1种选法，同理n-k位2，3有n-k-1种选法。

![image-20250702210938680](https://cdn.jsdelivr.net/gh/Withnoidea/images/image-20250702210938680.png)

![image-20250702211034997](https://cdn.jsdelivr.net/gh/Withnoidea/images/image-20250702211034997.png)

```c++
#include <iostream>
using namespace std;
typedef long long LL;
const int N = 1010, MOD = 1e9 + 7;
LL c[N][N];
int n;

int main()
{
  cin >> n;
  for(int i = 0; i <= n; i ++)
  {
    for(int j = 0; j <= i; j ++)
    {
      if(!j) c[i][j] = 1;
      else c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
    }
  }
  
  LL res = 0;
  for(int k = 2; k <= n - 2; k ++)
  {
    res = (res + (LL)c[n - 1][k] * (k - 1) * (n - k - 1)) % MOD;
  }
  cout << res << endl;
  return 0;
}
```

## [3196. I’m stuck! - AcWing题库](https://www.acwing.com/problem/content/3199/)		

st1[x]\[y]表示起点可以走到的

st2[x]\[y]所有从终点可以遍历到的就是所有可以走到t的点

答案就是st1 = true st2= false 的数量

```c++
#include <iostream>
using namespace std;
const int N = 55;

char g[N][N];
bool st1[N][N], st2[N][N];
int tx, ty;//记录终点的坐标
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
int n, m;

bool check(int x, int y, int k)
{
  char c = g[x][y];
  if(c == 'S' || c == 'T' || c == '+') return true;
  if(c == '-' && k % 2 == 1) return true;
  if(c == '|' && k % 2 == 0) return true;
  if(c == '.' && k == 2) return true;
  return false;
}

void dfs1(int x, int y)
{
  st1[x][y] = true;
  for(int i = 0; i < 4; i ++)
  {
    int a = x + dx[i], b = y + dy[i];
    if(a < 0 || a >= n || b < 0 || b >= m || g[a][b] == '#') continue;
    if(st1[a][b]) continue;
    if(check(x, y, i)) dfs1(a, b);
  }
}

void dfs2(int x, int y)
{
  st2[x][y] = true;
  for(int i = 0; i < 4; i ++)
  {
    int a = x + dx[i], b = y + dy[i];
    if(a < 0 || a >= n || b < 0 || b >= m || g[a][b] == '#') continue;
    if(st2[a][b]) continue;
    if(check(a, b, i ^ 2)) dfs2(a, b);
  }
}

int main()
{
  cin >> n >> m;
  for(int i = 0; i < n; i ++) cin >> g[i];

  for(int i = 0; i < n; i ++)
  {
    for(int j = 0; j < m; j ++)
    {
      if(g[i][j] == 'S') dfs1(i, j);
      else if(g[i][j] == 'T')
      {
        tx = i, ty = j;
        dfs2(i, j);
      }
    }
  }

  if(!st1[tx][ty]) puts("I'm stuck!");
  else
  {
    int res = 0;
    for(int i = 0; i < n; i ++)
    {
      for(int j = 0; j < m; j ++)
      {
        if(st1[i][j] == true && st2[i][j] == false)
        {
          res ++;
        }
      }
    }
    cout << res << endl;
  }
  return 0;
}
```

# 第一次CCF计算机软件能力认证

## [AcWing 3197. 相反数](https://www.acwing.com/activity/content/problem/content/3504/)

题意: n 个数字种寻找相反数的对数。

思路：用set存每个数字，存取当前x之前，先查询是否出现了-x,出现则寻找到一对数相反数，答案res ++，最后输出答案。

set底层基于红黑数，红黑树是一种自平衡的二叉搜索树，能够保证插入、删除和查找操作的时间复杂度为 O(log N)。

1 log 1 + 2 lopg 2 + … + n log n 则最后时间复杂度应该在nlogn级别

```c++
#include <iostream>
#include <set>
using namespace std;
set<int> st;
int n;
int res;

int main()
{
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        res += (st.count(-x));
        st.insert(x);
    }
    
    cout << res << endl;
    return 0;
}
```

其他看到的参考做法，s数组存储每次读取的x的数量，也就是s[x] ++,  s为负数，存s[abs（x）] ++，最后s中2的数量就是答案res, 自己理解后写的一遍代码. O（n）

```c++
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1010;
int s[N];
int n;
int res;

int main()
{
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        s[abs(x)] ++;
    }
    
    for(int i = 0; i < N; i ++)
    {
        res += (s[i] == 2);
    }
    
    cout << res << endl;
    
    return 0;
}
```

## [3198. 窗口](https://www.acwing.com/problem/content/3201/)

题意：模拟窗口点击，判断点击的是第几个窗口。

思路：两个栈模拟窗口，第一个存放所有输入的窗口坐标，每次点击依次从第一个栈弹出，入栈到第二个窗口，找到则输出窗口坐标，最后将第二个栈依次弹出，再入栈第一个窗口，即可保证顺序，找到点击的窗口需要特殊处理，最后入栈（保证在顶。如何映射每个窗口的序号，我的做法很阴间，尝试使用的散列表，将坐标和每个数字相加mod 1007.碰巧过了， 没有处理碰撞。

![image-20250703215337284](https://cdn.jsdelivr.net/gh/Withnoidea/images/image-20250703215337284.png)

```c++
#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;
const int N = 15;
typedef pair<pair<int, int>, pair<int, int>> PII;
stack<PII> stk1, stk2;
unordered_map<int, int> mp;
int n, m;

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
    {
        
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        PII p = {{x1, y1},{x2, y2}};
        stk1.push(p);
        mp[(x1 + y1 + x2 + y2 ) % 1007] = i;
    }
    while (m -- )
    {
        int x, y;
        cin >> x >> y;
        bool flag = false;
        PII target;
        while(stk1.size())
        {
            auto p = stk1.top();
            stk1.pop();
            stk2.push(p);
            if(x >= p.first.first && x <= p.second.first && y >= p.first.second && y <= p.second.second)
            {
                cout << mp[(p.first.first + p.first.second + p.second.first + p.second.second) % 1007] << endl;
                flag = true;
                target = p;
                break;
            }
        }
        if(flag == false)
        {
            puts("IGNORED");
            while(stk2.size())
            {
                auto p = stk2.top();
                stk2.pop();
                stk1.push(p);
            }
        }
        else
        {
            stk2.pop();
            while(stk2.size())
            {
                auto p = stk2.top();
                stk2.pop();
                stk1.push(p);
            }
            stk1.push(target);
        }
    }
    
    return 0;
}
```

参考做法，结构体数组进行存储窗口，修改窗口顺序，只需要修改结构体数组下标。

```c++
#include <bits/stdc++.h>
using namespace std;
const int N = 15;
struct window{
    int x1, y1, x2, y2, id;
}w[N];

int n, m;

int get(int x, int y)
{
    for(int i = n; i; i --)
    {
        if(x >= w[i].x1 && y >= w[i].y1 && x <= w[i].x2 && y <= w[i].y2)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        w[i] = {x1, y1, x2, y2, i};
    }
    while (m -- )
    {
        int x, y;
        cin >> x >> y;
        int t = get(x, y);
        if(!t)
            puts("IGNORED");
        else
        {
            cout << w[t].id << endl;
            auto r = w[t];
            for(int i = t; i < n; i ++)
                w[i] = w[i + 1];
            w[n] = r;
        }
    }
    
    return 0;
}
```

## [3199. 命令行选项 ](https://www.acwing.com/problem/content/3202/)

[C++ stringstream 简单使用-CSDN博客](https://blog.csdn.net/weixin_45867382/article/details/122109133)

用unordered_map<char, int> mp;记录每个指令参数类型 mp[x] = 1 为无参 2为有参， stringstream对命令行参数进行处理，map<char, string>  mps 存储每个命令，可以认为是存储每个合法单词，根据mp判断命令类型，输出指令

```c==
#include <bits/stdc++.h>
using namespace std;
int n;
string s;
unordered_map<char, int> mp;

int main()
{
  cin >> s;
  s += " ";
  for(int i = 0; i < s.size(); i ++)
  {
    if(s[i+1]==':') mp[s[i]]=2;    //有参字符，标记为2
    else
          mp[s[i]]=1; //无参字符，标记为1
  }

  cin >> n;
  getchar();
  for(int i = 1; i <= n; i ++)
  {
    map<char, string>  mps;
    getline(cin, s);
    stringstream ssin(s);
    vector<string> str;
    while(ssin >> s) str.push_back(s);
    for(int j = 1; j < str.size(); j ++)
    {
      if(str[j][0] != '-' || str[j][1] < 'a' || str[j].size() != 2) break;
      char c = str[j][1];
      if(mp[c] == 1) mps[c] = c;
      else if(mp[c] == 2 && (j + 1) < str.size()) mps[c] = str[j + 1], j ++;
      else break;
    }
    cout<<"Case "<<i<<":";
    for(auto x: mps)
        if(mp[x.first]==1) cout <<" -"<< x.second;
        else cout <<" -"<< x.first <<" "<< x.second;
    cout<<endl;
  }
  return 0;
}
```

## [3200. 无线网络](https://www.acwing.com/problem/content/3203/)

```c++
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

#define x first
#define y second

using namespace std;
typedef pair<int, int> PII;
typedef long long LL;
const int N = 210, M = N * N;

int n, m, k, r;
int h[N], e[M], ne[M], idx;
PII p[N];
int dist[N][N];

bool check(PII a, PII b)
{
    LL dx = a.x - b.x;
    LL dy = a.y - b.y;
    return dx * dx + dy * dy <= (LL) r * r;
}

void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++;
}

int bfs()
{
    queue<PII> q;
    q.push({1, 0});
    memset(dist, 0x3f, sizeof dist);
    dist[1][0] = 0;
    
    while(q.size())
    {
        auto t = q.front();
        q.pop();
        
        for(int i = h[t.x]; ~i; i = ne[i])
        {
            int x = e[i], y = t.y;
            if(x > n) y ++;
            if(y <= k)
            {
                if(dist[x][y] > dist[t.x][t.y] + 1)
                {
                    dist[x][y] = dist[t.x][t.y] + 1;
                    q.push({x, y});
                }
            }
        }
    }
    int res = 1e8;
    for(int i = 0; i <= k; i ++)
    {
        res = min(res, dist[2][i]);
    }
    return res - 1;
}

int main()
{
    cin >> n >> m >> k >> r;
    memset(h, -1, sizeof h);
    for(int i = 1; i <= n; i ++)
    {
        cin >> p[i].x >> p[i].y;
    }
    
    for(int i = n + 1; i <= n + m; i ++)
    {
        cin >> p[i].x >> p[i].y;
    }
    
    for(int i = 1; i <= n + m; i ++)
    {
        for(int j = i + 1; j <= n + m; j ++)
        {
            if(check(p[i], p[j]))
            {
                add(i, j), add(j, i);
            }
        }
    }
    
    cout << bfs() << endl;
    
    return 0;
}
```

## [3201. 任务调度](https://www.acwing.com/problem/content/description/3204/) :star2:

![image-20250715234559901](https://cdn.jsdelivr.net/gh/Withnoidea/images/image-20250715234559901.png)

````c++
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

const int N = 50, M = 210, INF = 0x3f3f3f3f;

int n;
int c[N][3];
int f[2][M][M][M];

int main()
{
    cin >> n;

    int m = 0, m2 = 0;
    for (int i = 1; i <= n; i ++ )
    {
        int x, y, z, t;
        cin >> x >> y >> z >> t;
        c[i][0] = x, c[i][1] = z, c[i][2] = min(y, t);
        m += x;
        if (i % 2) m2 += x;
    }

    m = max(m2, m - m2);

    memset(f, 0x3f, sizeof f);
    f[0][0][0][0] = 0;
    for (int u = 1; u <= n; u ++ )
        for (int i = 0; i <= m; i ++ )
            for (int j = i; j <= m; j ++ )
                for (int k = 0; k <= m; k ++ )
                {
                    int& v = f[u & 1][i][j][k];
                    if (k > j) v = INF;
                    else
                    {
                        register int x = c[u][0], y = c[u][1], z = c[u][2], t = u - 1 & 1;
                        v = f[u - 1 & 1][i][j][k] + z;
                        if (i >= x) v = min(v, f[t][i - x][j][k]);
                        if (j >= x) v = min(v, f[t][min(i, j - x)][max(i, j - x)][k]);
                        if (i >= y && k >= y)
                            v = min(v, f[t][i - y][j][k - y]);
                        if (j >= y && k >= y)
                            v = min(v, f[t][min(i, j - y)][max(i, j - y)][k - y]);
                    }
                }

    int res = INF;
    n &= 1;
    for (int i = 0; i <= m; i ++ )
        for (int j = i; j <= m; j ++ )
            for (int k = 0; k <= j; k ++ )
                res = min(res, f[n][i][j][k] + max(i, j));

    cout << res << endl;
    return 0;
}
```
````

# 第二次CCF计算机软件能力认证

## [3202. 相邻数对 ](https://www.acwing.com/problem/content/3205/)

给定 $n$ 个**不同的**整数，问这些数中有多少对整数，它们的值正好相差 $1$。

```
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int n;
int ans;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
        
    sort(a + 1, a + 1 + n);
    
    for(int i = 1; i < n; i ++)
        if(a[i] + 1 == a[i + 1])
            ans ++;
    
    cout << ans << endl;
    return 0;
}
```
```
#include <bits/stdc++.h>
using namespace std;
set<int> st;
int n;
int cnt;

int main()
{
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        if(st.count(x + 1)) cnt ++;
        if(st.count(x - 1)) cnt ++;
        st.insert(x);
    }
    cout << cnt << endl;
    
    return 0;
}
```

## [3203. 画图](https://www.acwing.com/problem/content/3206/)



```
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
bool st[N][N];
int g[N][N];
int n;
int ans;

int main()
{
    cin >> n;
    while (n -- )
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i ++)
            for(int j = y1; j < y2; j ++)
                st[i][j] = 1;
    }

    for(int i = 0; i <= 100; i ++)
        for(int j = 0; j <= 100; j ++)
            ans += st[i][j];

    cout << ans << endl;
    return 0;
}
```

## [3204. 字符串匹配](https://www.acwing.com/problem/content/3207/)

```c++
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

string get(string str)
{
    string res;
    for (auto c: str)
        res += tolower(c);
    return res;
}

int main()
{
    string S;
    cin >> S;
    int n, type;
    cin >> type >> n;

    while (n -- )
    {
        string str;
        cin >> str;
        if (type && str.find(S) != -1) cout << str << endl;
        else if (!type && get(str).find(get(S)) != -1) cout << str << endl;
    }
    return 0;
}
```



## 持续更新中~

P.S. 近期时间可能跟不上捏，缓冲期争取3~4天完成一套真题
