#include <iostream>
using namespace std;
string weeks[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
string s1, s2, s3, s4;

int main()
{
  cin >> s1 >> s2 >> s3 >> s4;
  bool f1 = false;
  for (int i = 0; i < s1.size() && i < s2.size(); i++)
  {
    if (s1[i] >= 'A' && s1[i] <= 'Z' && s1[i] == s2[i] && f1 == false)
    {
      if (s1[i] - 'A' > 6)
        continue;
      cout << weeks[s1[i] - 'A'] << " ";
      f1 = true;
      continue;
    }
    if (f1 && ((s1[i] >= 'A' && s1[i] <= 'N') || isdigit(s1[i])) && s1[i] == s2[i])
    {
      if (s1[i] >= 'A' && s1[i] <= 'N')
      {
        printf("%02d:", s1[i] - 'A' + 10);
      }
      else
      {
        printf("%02d:", s1[i] - '0');
      }
      break;
    }
  }

  for (int i = 0; i < s3.size() && i < s4.size(); i++)
  {
    if (s3[i] == s4[i] && isalpha(s3[i]))
    {
      printf("%02d", i);
      break;
    }
  }
  return 0;
}