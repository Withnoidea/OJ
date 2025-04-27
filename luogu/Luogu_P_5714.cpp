#include <bits/stdc++.h>
using namespace std;
int main()
{
  double h, w;
  cin >> w >> h;
  double bmi = w / (h * h);
  if (bmi < 18.5)
    cout << "Underweight" << endl;
  else if (bmi >= 18.5 && bmi < 24)
    puts("Normal");
  else
  {
    printf("%.4lf\n", bmi);
    puts("Overweight ");
  }
  return 0;
}