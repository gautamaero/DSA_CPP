#include <iostream>
using namespace std;
int main()
{

  int trow;
  cin >> trow;
  int row = 1;
  while (row <= trow)
  { // for particular row;
    int i = 1;
    while (i <= row)
    {
      cout << i * i << "\t";
      i = i + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}