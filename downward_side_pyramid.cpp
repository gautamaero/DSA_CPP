#include <iostream>
using namespace std;
int main()
{

  int trows;
  cin >> trows;
  int row = 1; // initializing row variable
  while (row <= trows)
  {
    // for printing space
    int sp = 1; // initializing space variable
    while (sp <= row - 1)
    {
      cout << " ";
      sp = sp + 1;
    }
    // for printing star
    int str = 1; // initializing star variable
    while (str <= 2 * (trows - row) + 1)
    {

      cout << "*";
      str = str + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}