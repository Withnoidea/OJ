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