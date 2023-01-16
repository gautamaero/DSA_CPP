// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
  // Write C++ code here

  // initialization of variable
  int row = 1;
  int trow;
  cin >> trow;
  // checking outer loop
  while (row <= trow)
  {
    // for Printing space
    int sp = 1;
    while (sp <= (trow - row))
    {
      cout << " ";
      sp = sp + 1;
    }
    // For printing star;
    int str = 1;
    while (str <= row)
    {
      cout << "*";
      str = str + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}