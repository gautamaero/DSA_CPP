// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{

  int trow;
  cin >> trow;
  int row = 1;
  while (row <= trow)
  {
    // for printing space;
    int sp = 1;
    while (sp <= trow - row)
    {
      cout << " ";
      sp = sp + 1;
    }
    // for printing stars
    int str = 1;

    while (str <= 2 * row - 1)
    {

      cout << "*";
      str = str + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}