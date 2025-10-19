#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

// 计算x的各位数字之和（题目中定义的f(x)）
LL f(LL x) {
    LL sum = 0;
    while (x > 0) {
        sum += x % 10;  // 累加最后一位数字
        x /= 10;        // 去掉最后一位数字
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    
    vector<LL> A(N + 1);  // 存储A_0到A_N
    A[0] = 1;             // 初始条件
    
    // 计算A_1到A_N
    for (int i = 1; i <= N; ++i) {
        // A_i是前i项f(A_j)的和（j从0到i-1）
        LL sum = 0;
        for (int j = 0; j < i; ++j) {
            sum += f(A[j]);
        }
        A[i] = sum;
    }
    
    cout << A[N] << endl;
    return 0;
}