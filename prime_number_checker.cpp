// Checking prime numbers or not

#include <iostream>
using namespace std;
int main()
{

  int number;
  cin >> number;
  int i = 2;              // since i=1 is always factor of number so initialization start from 2;
  while (i <= number - 1) // number itself is always a factor of number, so checking till just before number
  {
    if (number % i == 0) // % will check remainder on division of ith number
    {
      cout << "Number is prime" << endl;
      return 0;
    }
    i = i + 1;
  }
  cout << "number is prime";
  return 0;
}