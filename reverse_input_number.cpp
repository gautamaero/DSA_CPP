#include <iostream>
using namespace std;
int main()
{
  // Write C++ code here
  int number;
  cin >> number; // taking input number and making assumption of positive numbers;
  int unit_place;
  while (number % 10 <= number)
  {
    unit_place = number % 10;
    cout << unit_place;
    number = (number - unit_place) / 10;
    if (number / 10 == 0)
    {
      cout << number;
      return 0;
    }
  }

  return 0;
}