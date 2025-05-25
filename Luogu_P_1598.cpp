#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> mp;
    int max_cnt = 0;
    
    // 读取4行输入
    for (int i = 0; i < 4; i++) {
        string s;
        getline(cin, s);
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                mp[c]++;
                max_cnt = max(max_cnt, mp[c]);
            }
        }
    }
    
    // 输出柱状图
    for (int i = max_cnt; i > 0; i--) {
        for (int j = 0; j < 26; j++) {
            char c = 'A' + j;
            if (mp[c] >= i) {
                cout << '*';
            } else {
                cout << ' ';
            }
            if (j != 25) cout << ' '; // 不在最后一个字符后加空格
        }
        cout << endl;
    }
    
    // 输出字母行
    for (int i = 0; i < 26; i++) {
        cout << char('A' + i);
        if (i != 25) cout << ' '; // 不在最后一个字母后加空格
    }
    
    return 0;
}