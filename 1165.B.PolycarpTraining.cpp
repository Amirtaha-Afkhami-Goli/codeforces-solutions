#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, r, a[222000];
  for (cin >> n; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  for (i = 0; i < n; i++)
    r += r < a[i];
  cout << r;
}