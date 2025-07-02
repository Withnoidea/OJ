#include <iostream>
using namespace std;
int n;
long long a, b, c;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a >> b >> c;
    cout << "Case #" << i << ": " << (a + b > c ? "true" : "false") << endl;
  }
  return 0;
}