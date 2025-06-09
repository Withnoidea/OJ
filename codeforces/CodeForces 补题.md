# CodeForces 补题

:date:6 / 9

## [Dashboard - Codeforces Round 1029 (Div. 3) - Codeforces](https://codeforces.com/contest/2117)

### [Problem - A - Codeforces](https://codeforces.com/contest/2117/problem/A)

#### 大致题意

尤瑟夫站在一条长走廊的入口处，走廊上有一排门，编号从 1 到 n 。他需要按编号顺序穿过从 1 到 n 的所有门，到达出口(经过门 n )。

每扇门都可以打开或关闭。如果一扇门是开着的，优素福会在一秒钟内穿过它。如果门是关着的，优素福就进不去。

然而，尤瑟夫有一个特殊的按钮，他在任何时候最多只能使用一次。此按钮使所有关闭的门在 x 秒内打开。

你的任务是确定Yousef是否能通过所有的门，如果他最多只能按一次按钮。

#### 思路

直接求第一个1的位置（i）到最后一个1位置（j）的距离, j - i + 1， 判断j - i + 1 <= x, true 则可以通过，false则不行

#### 代码

```c++
#include <bits/stdc++.h>
using namespace std;
int t;

bool cmp(vector<int> &res, int x)
{
  int i = 0, j = res.size() - 1;
  while (res[i] == 0 && i < res.size())
    i++;
  while (res[j] == 0 && j >= 0)
    j--;
  // cout << j << " " << i << endl;
  return j - i + 1 <= x;
}

int main()
{
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      res.push_back(a);
    }
    cout << (cmp(res, x) ? "YES" : "NO") << endl;
  }

  return 0;
}
```

### [Problem - B - Codeforces](https://codeforces.com/contest/2117/problem/B)

#### 大致题意

大小为 m 的数组 a 的收缩操作定义如下：

- 选择一个索引 i ( 2≤i≤m−1 )，使得 ai>ai−1 和 ai>ai+1 .
- 从数组中删除 ai 。

定义排列组合的得数为 p 作为对 p 进行收缩操作的最大次数。

优素福给了你一个整数 n 。请构造一个长度为 n 的长度为 p 的排列组合，并尽可能**最大**分值。如果有多个答案，您可以输出其中任何一个。

∗∗ 长度为 nn 的排列是由 nn 个不同的整数组成的数组，这些整数从 11 到 nn 依次排列。例如， [2,3,1,5,4][2,3,1,5,4] 是一个排列，但 [1,2,2][1,2,2] 不是一个排列( 22 在数组中出现了两次)， [1,3,4][1,3,4] 也不是一个排列( n=3n=3 ，但数组中有 44 )。

意思就是求最大的操作次数，操作为将某个特定的数删除，删除的数字要求大于左边和右边的数字

#### 思路：

在排列中，最大值元素只能出现一次。由于所有其他元素都保证小于最大值，因此如果最大值的左边有一个元素，右边也有一个元素，我们就可以去掉最大值。

移除最大值元素后，还会出现另一个最大值元素，我们也要将其移除。这个过程可以一直持续到 permutation 的长度变为 2 ，因为剩下的两个元素都在两端，无法移除。

因此，任何两端有 1 和 2 的排列都是可以接受的，因为任何大于 2 的值最终都会成为两个元素之间的最大值。

#### 代码

```c++
#include <bits/stdc++.h>
using namespace std;
int t;

int main()
{
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i ++)
      cout << i << " ";
    cout << 1 << endl;
  }

  return 0;
}

```

### [Problem - C - Codeforces](https://codeforces.com/contest/2117/problem/C)

#### 题意

![image-20250609233549327](https://cdn.jsdelivr.net/gh/Withnoidea/picgo@main/images/image-20250609233549327.png)

#### 思路：

在一个有效的分区中，如果一个分段在某个位置 rr 结束，那么它必须包含前缀 \[1,r] 中所有不同的元素。

![image-20250609233831639](https://cdn.jsdelivr.net/gh/Withnoidea/picgo@main/images/image-20250609233831639.png)

