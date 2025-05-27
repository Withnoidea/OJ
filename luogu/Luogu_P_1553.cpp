#include <bits/stdc++.h>
using namespace std;

string reverse_num(string s)
{
  reverse(s.begin(), s.end());
  // 去除前导零，但保留至少一个零
  int i = 0;
  while (i < s.size() - 1 && s[i] == '0')
  {
    i++;
  }
  s = s.substr(i);
  return s.empty() ? "0" : s;
}

string reverse_decimal(string s)
{
  reverse(s.begin(), s.end());
  // 去除末尾多余的零，但保留至少一个零
  int i = s.size() - 1;
  while (i > 0 && s[i] == '0')
  {
    i--;
  }
  s = s.substr(0, i + 1);
  return s.empty() ? "0" : s;
}

int main()
{
  string num;
  cin >> num;

  if (num.find(".") != string::npos)
  {
    int idx = num.find(".");
    string integer_part = num.substr(0, idx);
    string decimal_part = num.substr(idx + 1);

    string reversed_integer = reverse_num(integer_part);
    string reversed_decimal = reverse_decimal(decimal_part);

    cout << reversed_integer << "." << reversed_decimal;
  }
  else if (num.find("/") != string::npos)
  {
    int idx = num.find("/");
    string numerator = num.substr(0, idx);
    string denominator = num.substr(idx + 1);

    string reversed_numerator = reverse_num(numerator);
    string reversed_denominator = reverse_num(denominator);

    cout << reversed_numerator << "/" << reversed_denominator;
  }
  else if (num.find("%") != string::npos)
  {
    string number_part = num.substr(0, num.size() - 1);
    string reversed_number = reverse_num(number_part);
    cout << reversed_number << "%";
  }
  else
  {
    string reversed_num = reverse_num(num);
    cout << reversed_num;
  }

  return 0;
}