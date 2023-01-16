#include <iostream>
using namespace std;
int main()
{
  // Write C++ code here
  int number, sum_odd, sum_even;
  cin >> number;
  int unit_place;
  int i = 1;
  while (number % 10 <= number)
  {
    unit_place = number % 10;
    // cout << unit_place;
    number = (number - unit_place) / 10;
    if (number / 10 == 0)
    {
      // cout << number;
      return 0;
    }
    if (i % 2 == 0)
    {
      sum_even = sum_even + unit_place;
    }
    else
    {
      sum_odd = sum_odd + unit_place;
    }
    i = i + 1;
  }

  cout << sum_odd << endl;
  cout << sum_even << endl;

  return 0;
}