#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n], d[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    d[0] = a[0];
    for (int i = 1; i < n; i++)
    {
      if ((a[i - 1] + a[i]) % 2 == 0)
      {
        d[i] = a[i];
      }
      else
      {
        d[i] = max(a[i], a[i] + d[i - 1]);
      }
    }
    int answer = d[0];
    for (int i = 1; i < n; i++)
    {
      answer = max(answer, d[i]);
    }
    cout << answer << '\n';
  }
  return 0;
}