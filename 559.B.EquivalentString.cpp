// #include <iostream>
// using namespace std;
// int main()
// {
//   string a, b;
//   cin >> a >> b;
//   int l = a.length();
//   if (a == b)
//   {
//     cout << "YES";
//     return 0;
//   }
//   string a1, a2, b1, b2;
//   for (int i = 0; i < l / 2; i++)
//   {
//     a1 += a[i];
//     b1 += b[i];
//   }
//   for (int i = l / 2; i < l; i++)
//   {
//     a2 += a[i];
//     b2 += b[i];
//   }
//   cout << a1 << " " << a2 << " " << b1 << " " << b2 << endl;
//   if ((a1 == b1 && a2 == b2) || (a1 == b2 && a2 == b1))
//   {
//     cout << "YES";
//     return 0;
//   }
//   else
//   {
//     cout << "NO";
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
string f(string s)
{
  int n = s.size();
  if (n & 1)
    return s;
  string l = s.substr(0, n / 2);
  string r = s.substr(n / 2);
  l = f(l);
  r = f(r);
  if (l > r)
    return r + l;
  return l + r;
}
int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  s1 = f(s1);
  s2 = f(s2);
  if (s1 == s2)
    cout << "YES";
  else
    cout << "NO";
}