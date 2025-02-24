#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int testCases, n;
  cin >> testCases;
  while (testCases--)
  {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (i != 0 && i != n - 1)
      {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
        {
          cout << i + 1;
          break;
        }
      }
      else if (i == 0)
      {
        if (arr[i] != arr[i + 1] && arr[i] != arr[i + 2])
        {
          cout << i + 1;
          break;
        }
      }
      else
      {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i - 2])
        {
          cout << i + 1;
          break;
        }
      }
    }
    cout << endl;
  }
  return 0;
}