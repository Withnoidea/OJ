#include <bits/stdc++.h>
using namespace std;

struct Node {
    string id;
    int score;
    string kc;   // 考场号 (1~3位，id.substr(1,3))
    string date; // 日期 (6位，id.substr(4,6))
    char level;  // 等级 (id[0])
};

struct Node2 {
    string kch;  // 考场号
    int cnt;
    string date;
};

bool cmp1(const Node &a, const Node &b) {
    if (a.score != b.score) return a.score > b.score; // 非升序 -> 降序
    return a.id < b.id; // 用 < 保证严格弱序
}

bool cmp2(const Node2 &a, const Node2 &b) {
    if (a.cnt != b.cnt) return a.cnt > b.cnt; // 按人数非递增
    return a.kch < b.kch; // 人数并列按考场编号升序
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<Node> all;
    vector<Node> vtT, vtA, vtB;
    set<string> stkc;
    for (int i = 0; i < n; ++i) {
        string id; int score;
        cin >> id >> score;
        string kc = id.substr(1, 3);
        string date = id.substr(4, 6);
        char level = id[0];
        Node node{ id, score, kc, date, level };
        all.push_back(node);
        stkc.insert(kc);
        if (level == 'T') vtT.push_back(node);
        else if (level == 'A') vtA.push_back(node);
        else if (level == 'B') vtB.push_back(node);
    }

    // mp: key = date(6) + kc(3) -> count
    map<string,int> mp;
    for (const auto &nd : all) {
        string key = nd.date + nd.kc;
        mp[key]++;
    }
    vector<Node2> res;
    for (const auto &p : mp) {
        // p.first = date(6) + kc(3)
        string date = p.first.substr(0, 6);
        string kc = p.first.substr(6, 3);
        res.push_back(Node2{kc, p.second, date});
    }

    if (!vtT.empty()) sort(vtT.begin(), vtT.end(), cmp1);
    if (!vtA.empty()) sort(vtA.begin(), vtA.end(), cmp1);
    if (!vtB.empty()) sort(vtB.begin(), vtB.end(), cmp1);
    if (!res.empty()) sort(res.begin(), res.end(), cmp2);

    for (int qi = 1; qi <= m; ++qi) {
        int op;
        cin >> op;
        if (op == 1) {
            char c; cin >> c;
            cout << "Case " << qi << ": " << op << " " << c << "\n";
            vector<Node> *pv = nullptr;
            if (c == 'T') pv = &vtT;
            else if (c == 'A') pv = &vtA;
            else if (c == 'B') pv = &vtB;
            if (!pv || pv->empty()) {
                cout << "NA\n";
            } else {
                for (const auto &p : *pv) {
                    cout << p.id << " " << p.score << "\n";
                }
            }
        } else if (op == 2) {
            string kc; cin >> kc;
            cout << "Case " << qi << ": " << op << " " << kc << "\n";
            if (stkc.count(kc) == 0) {
                cout << "NA\n";
            } else {
                int cnt = 0, sum = 0;
                for (const auto &p : all) {
                    if (p.kc == kc) { cnt++; sum += p.score; }
                }
                cout << cnt << " " << sum << "\n";
            }
        } else if (op == 3) {
            string date; cin >> date;
            cout << "Case " << qi << ": " << op << " " << date << "\n";
            bool found = false;
            // res 已按题目要求排序（人数非递减 -> 我们用降序；人数并列按考场编号升序）
            for (const auto &r : res) {
                if (r.date == date) {
                    cout << r.kch << " " << r.cnt << "\n";
                    found = true;
                }
            }
            if (!found) cout << "NA\n";
        } else {
            // 不存在的操作类型题目未定义，按题意不会出现
            cout << "Case " << qi << ": " << op << "\n";
            cout << "NA\n";
        }
    }

    return 0;
}
