#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int T;
  cin >> T;
  string s;
  while (T--)
  {
    cin >> s;
    int lgr_count = 0;
    int csp_count = 0;
    vector<int> lgr_pos;
    vector<int> csp_pos;
    for (int i = 0; i + 2 < s.size(); ++i)
    {
      if (s.substr(i, 3) == "LGR")
      {
        lgr_count++;
        lgr_pos.push_back(i);
      }
      if (s.substr(i, 3) == "CSP")
      {
        csp_count++;
        csp_pos.push_back(i);
      }
    }
    if (lgr_count == 0 || csp_count == 0)
    {
      cout << 0 << endl;
      continue;
    }
    if (lgr_count <= csp_count)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << 1 << endl;
    }
  }
  return 0;
}