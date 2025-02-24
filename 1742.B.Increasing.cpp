#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    bool possible = true;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
      if (arr[i] == arr[i - 1])
      {
        possible = false;
        break;
      }
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}