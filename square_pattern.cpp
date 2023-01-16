/*
DESIRED OUTPUT: FOR GIVEN TOTAL ROWS
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
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
    // for printing repetitative number
    int i = 1;
    while (i <= row)
    {
      cout << row << '\t';
      i = i + 1;
    }
    // followed by increasing number:
    int j = i;
    while (j <= trow)
    {
      cout << j << '\t';
      j = j + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}