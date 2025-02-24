#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  int a[n];
  int aTmp[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    aTmp[i] = a[i];
  }
  sort(aTmp, aTmp + n);
  int sum, c = 0;
  for (int i : aTmp)
  {
    if (sum >= k)
    {
      break;
    }
    sum += i;
    c++;
  }
  if (sum > k)
  {
    c--;
  }
  cout << c << endl;
  int ans[c];
  int sum1, co = 0;
  while (sum1 <= k && co < n)
  {
    sum1 += aTmp[co];
    for (int i = 0; i < n; i++)
    {
      if (a[i] == aTmp[co])
      {
        a[i] = 0;
        ans[co] = i + 1;
        break;
      }
    }
    co++;
  }
  for (int i : ans)
  {
    cout << i << " ";
  }
  return 0;
}