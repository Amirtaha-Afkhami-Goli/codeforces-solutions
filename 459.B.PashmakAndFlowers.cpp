#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long b[n];
  long long MinCount = 0, MaxCount = 0, max = -1, min = 100000000000000000;
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
    if (b[i] < min)
      min = b[i];
    if (b[i] > max)
      max = b[i];
  }
  cout << max - min << " ";
  for (int i = 0; i < n; i++)
  {
    if (b[i] == max)
      MaxCount++;
    if (b[i] == min)
      MinCount++;
  }
  long long ans2 = MinCount * MaxCount;
  if (min == max)
  {
    ans2 = n * (n - 1) / 2;
  }
  cout << ans2;
  return 0;
}