// #include <iostream>
// using namespace std;
// #define ll long long
// int main()
// {
//   ll answer = 0, l, counter = 0;
//   cin >> l;
//   ll arr[l], j = 0;
//   for (int i = 0; i < l; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 1; i < l; i++)
//   {
//     if (arr[i] != arr[i - 1])
//     {
//       if (i != j)
//       {
//         answer += (i - j + 1) * (i - j) / 2;
//       }
//       else
//       {
//         answer++;
//       }
//       j = i;
//     }
//   }
//   cout << answer++;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
long long calculateSum(long long temp)
{
  long long sum = (temp * (temp + 1)) / 2;
  return sum;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  long long sum = 0, temp = 1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] == arr[i - 1])
      temp++;
    else
    {
      sum += calculateSum(temp);
      temp = 1;
    }
  }
  sum += calculateSum(temp);
  cout << sum;
  return 0;
}