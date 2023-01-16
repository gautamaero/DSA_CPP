// Given list of integers find the min and max ,avg of all the integers;

#include <iostream>
using namespace std;
int main()
{
  int n, first_num, i = 1, number, max_num, min_num, mean_num;
  cin >> n; // total number
  // entering first number
  cin >> first_num;

  max_num = first_num;
  min_num = first_num;
  mean_num = first_num;

  while (i <= n - 1)
  {
    cin >> number;
    mean_num = mean_num + number;

    // for checking the max_number

    if (number > max_num)
    {
      max_num = number;
    }

    // also need to check min_number

    if (number < min_num)
    {
      min_num = number;
    }

    i = i + 1;
  }

  cout << max_num << endl;
  cout << min_num << endl;
  cout << mean_num << endl;

  return 0;
}