#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n, s;
  cin >> n >> s;
  long long arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  long long a = 0, b = n + 1, ans = 0;
  while (b - a > 1)
  {
    long long c = (b + a) / 2;
    long long arr2[n];
    for (int i = 0; i < n; i++)
      arr2[i] = arr[i] + (i + 1) * c;
    sort(arr2, arr2 + n);
    long long temp = 0;
    for (int i = 0; i < c; i++)
    {
      temp += arr2[i];
    }
    if (temp <= s)
    {
      a = c;
      ans = temp;
    }
    else
    {
      b = c;
    }
  }
  cout << a << " " << ans;
  return 0;
}