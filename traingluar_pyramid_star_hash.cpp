#include <iostream>
using namespace std;
int main()
{

  int trows;
  cin >> trows;
  int row = 1;
  while (row <= trows)
  {

    // frist printing space

    int sp = 1;
    while (sp <= trows - row)
    {

      cout << " "
           << "\t";
      sp = sp + 1;
    }

    // Then printing increasing number which has been replaced by *

    int str = 1;
    while (str <= row)
    {
      cout << "*"
           << "\t";
      ;
      str = str + 1;
    }

    // The decreasing number which has been replaced by #

    int ha = 1;
    while (ha <= row - 1)
    {
      cout << "#"
           << "\t";
      ;
      ha = ha + 1;
    }
    cout << endl;
    row = row + 1;
  }

  return 0;
}