// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int B[n];
//   int len = 1;
//   int helper = 1;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> B[i];
//   }
//   int firstNum = B[0];
//   for (int i : B)
//   {
//     int x = i;
//     if (x >= firstNum)
//     {
//       len++;
//     }
//     else
//     {
//       len = 1;
//     }
//     firstNum = x;
//     helper = max(helper, len);
//   }
//   cout << helper;
//   return 0;
// }
#include <iostream>
using namespace std;
int main()
{
  int n, y = 1, x = 1;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i > 0)
      if (arr[i] >= arr[i - 1])
      {
        y++;
        x = max(x, y);
      }
      else
        y = 1;
  }

  cout << x << endl;
  return 0;
}
