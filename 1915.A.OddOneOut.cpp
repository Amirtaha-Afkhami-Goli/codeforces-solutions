#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[0] != arr[1])
    {
      cout << arr[0] << endl;
    }
    else
    {
      cout << arr[2] << endl;
    }
  }
  return 0;
}