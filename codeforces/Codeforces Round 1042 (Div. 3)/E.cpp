#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != b[i]) {
                ll newVal = a[i] ^ a[i + 1];
                if (newVal != b[i]) {
                    ok = false;
                    break;
                }
                a[i] = newVal; // 模拟操作
            }
        }
        if (a[n - 1] != b[n - 1]) ok = false;
        cout << (ok ? "YES" : "NO") << "\n";
    }
}
