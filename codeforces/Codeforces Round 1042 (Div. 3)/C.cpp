#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> S(n), T(n);
        for (int i = 0; i < n; ++i) cin >> S[i];
        for (int i = 0; i < n; ++i) cin >> T[i];

        unordered_map<ll, long long> cntS, cntT;
        cntS.reserve(n*2);
        cntT.reserve(n*2);

        for (int i = 0; i < n; ++i) {
            ll r = (k==0 ? S[i] : (S[i] % k + k) % k);
            cntS[r]++;
        }
        for (int i = 0; i < n; ++i) {
            ll r = (k==0 ? T[i] : (T[i] % k + k) % k);
            cntT[r]++;
        }

        bool ok = true;
        if (cntS[0] != cntT[0]) ok = false;

        unordered_set<ll> seen;
        seen.reserve(cntS.size() + cntT.size());

        vector<ll> keys;
        keys.reserve(cntS.size() + cntT.size());
        for (auto &p : cntS) keys.push_back(p.first);
        for (auto &p : cntT) if (!cntS.count(p.first)) keys.push_back(p.first);

        for (ll r : keys) {
            if (!ok) break;
            if (r == 0) continue;
            if (seen.count(r)) continue;
            ll comp = (k - r) % k;
            long long ssum = 0, tsum = 0;
            if (cntS.count(r)) ssum += cntS[r];
            if (cntS.count(comp)) ssum += cntS[comp];
            if (cntT.count(r)) tsum += cntT[r];
            if (cntT.count(comp)) tsum += cntT[comp];
            if (ssum != tsum) { ok = false; break; }
            seen.insert(r);
            seen.insert(comp);
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
