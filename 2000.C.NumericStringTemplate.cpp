#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n, m;
    cin >> n;
    long long arr[n];
    for (auto i : arr)
      cin >> i;
    cin >> m;
    while (m--)
    {
      string s;
      cin >> s;
      if (s.size() != n)
      {
        cout << "NO" << endl;
        continue;
      }
      map<char, long long> c2n;
      map<long long, char> n2c;
      bool isValid = true;
      for (long long i = 0; i < n; i++)
      {
        char c = s[i];
        long long nu = arr[i];
        if (c2n.count(c) && c2n[c] != nu)
        {
          isValid = false;
          break;
        }
        if (n2c.count(nu) && n2c[nu] != c)
        {
          isValid = false;
          break;
        }
        n2c[nu] = c;
        c2n[c] = nu;
      }
      cout << (isValid ? "YES" : "NO") << endl;
    }
  }
  return 0;
}