// Desired output in the this format:"
/*
**********
*********
********
*******
******
*****
****
***
**
*                  */

#include <iostream>
using namespace std;
int main()
{

  int trow;
  cin >> trow;
  int row = 1;
  while (row <= trow)
  {
    int sp = 1;
    while (sp <= (row - 1))
    {
      cout << " ";
      sp = sp + 1;
    }
    // for printing star
    int str = 1;
    while (str <= (trow + 1) - row)
    {
      cout << "*";
      str = str + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}