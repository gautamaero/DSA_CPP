#include <iostream>
using namespace std;

int main()
{
  // Replace the array 1 and array 2 with your choice of arrays
  int arr1[4] = {4, -5, 6, 7};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[5] = {1, 9, -11, 13, 2};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int arr3[n1 + n2] = {};

  // took element from array1 and put in the array 3
  for (int i = 0; i < n1; i++)
  {
    arr3[i] = arr1[i];
  }
  // took element from array2 and put in the array 3
  for (int i = 0; i < (n1 + n2); i++)
  {
    arr3[i + n1] = arr2[i];
  }

  // Now we can apply the sorting algorithm on the third array :
  int n3 = n1 + n2;
  // Bubble sort algorithm for sorting the 3rd array
  for (int i = 0; i <= n3 - 2; i++)
  {
    for (int j = 0; j <= (n3 - 2 - i); j++)
    {
      if (arr3[j] > arr3[j + 1])
      {
        swap(arr3[j], arr3[j + 1]);
      }
    }
  }

  // For printing the output array :
  for (int i = 0; i < (n1 + n2); i++)
  {
    cout << arr3[i] << endl;
  }

  return 0;
}
