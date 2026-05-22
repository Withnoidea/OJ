#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;


struct Couple {
    string u, v;
    int init_idx;
    int id; 
};


bool cmp_lucky(const pair<Couple, int>& a, const pair<Couple, int>& b) {
    if (a.y != b.y) return a.y > b.y;
    return a.x.u < a.x.u;
}


bool cmp_unlucky(const pair<Couple, int>& a, const pair<Couple, int>& b) {
    if (a.y != b.y) return a.y < b.y;
    return a.x.u < a.x.u;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<Couple> couples(n);
    for (int i = 0; i < n; i++) {
        cin >> couples[i].u >> couples[i].v >> couples[i].init_idx;
        couples[i].id = i;
    }


    unordered_map<string, vector<int>> arrow_cnt;
    
    for (int i = 0; i < k; i++) {
        string name;
        int type;
        cin >> name >> type;
        if (arrow_cnt.find(name) == arrow_cnt.end()) {
            arrow_cnt[name] = vector<int>(2, 0);
        }
        arrow_cnt[name][type]++;
    }

    vector<pair<Couple, int>> lucky_list;
    vector<pair<Couple, int>> unlucky_list;

    for (int i = 0; i < n; i++) {
        string u = couples[i].u;
        string v = couples[i].v;
        int init = couples[i].init_idx;


        int change_u = 0;
        int gold_u = 0, lead_u = 0;
        if (arrow_cnt.find(u) != arrow_cnt.end()) {
            gold_u = arrow_cnt[u][1];
            lead_u = arrow_cnt[u][0];
            change_u = gold_u * 520 - lead_u * 520;
        }


        int change_v = 0;
        int gold_v = 0, lead_v = 0;
        if (arrow_cnt.find(v) != arrow_cnt.end()) {
            gold_v = arrow_cnt[v][1];
            lead_v = arrow_cnt[v][0];
            change_v = gold_v * 520 - lead_v * 520;
        }


        int final_sum = (init + change_u) + (init + change_v);


        bool u_only_gold = (gold_u > 0 && lead_u == 0);
        bool v_only_gold = (gold_v > 0 && lead_v == 0);
        

        bool u_has_lead = (lead_u > 0);
        bool v_has_lead = (lead_v > 0);

        if (u_only_gold && v_only_gold) {
            lucky_list.push_back({couples[i], final_sum});
        }
        if (u_has_lead || v_has_lead) {
            unlucky_list.push_back({couples[i], final_sum});
        }
    }


    sort(lucky_list.begin(), lucky_list.end(), cmp_lucky);
    sort(unlucky_list.begin(), unlucky_list.end(), cmp_unlucky);

    int lucky_out = min(3, (int)lucky_list.size());
    for (int i = 0; i < lucky_out; i++) {
        cout << lucky_list[i].x.u << " " << lucky_list[i].x.v << " " << lucky_list[i].y << "\n";
    }


    int unlucky_out = min(3, (int)unlucky_list.size());
    for (int i = 0; i < unlucky_out; i++) {
        cout << unlucky_list[i].x.u << " " << unlucky_list[i].x.v << " " << unlucky_list[i].y << "\n";
    }

    return 0;
}