/*
*

**

***
 */

#include <iostream>
using namespace std;
int main()
{
  int trow;
  cin >> trow;
  int row = 1;
  while (row <= trow)
  {
    // printing star for one particular row
    int str = 1;
    while (str <= row)
    {
      cout << str << "\t";

      str = str + 1;
    }

    cout << endl;
    row = row + 1;
  }

  return 0;
}