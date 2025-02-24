#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
    sort(arr, arr + n);
    cout << sum - (n * arr[0]) << endl;
  }
  return 0;
}