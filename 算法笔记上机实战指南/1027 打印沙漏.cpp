#include <iostream>
using namespace std;
int n;
char c;

int main()
{
  cin >> n >> c;
  int row = 0;
  // i为扩展层数
  for (int i = 1; i < n; i++)
  {
    if (2 * i * (i + 2) + 1 > n)
    {
      row = i - 1;
      break;
    }
  }

  for (int i = row; i >= 1; i--)
  {
    for (int k = row - i; k >= 1; k--)
      cout << " ";
    for (int j = i * 2 + 1; j >= 1; j--)
      cout << c;
    cout << endl;
  }
  for (int i = 1; i <= row; i++)
    cout << ' ';
  cout << c << endl;
  for (int i = 1; i <= row; i++)
  {
    for (int k = row - i; k >= 1; k--)
      cout << ' ';
    for (int j = 1; j <= i * 2 + 1; j++)
      cout << c;
    cout << endl;
  }
  cout << n - (2 * row * (row + 2) + 1) << endl;
  return 0;
}