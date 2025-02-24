#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string hostName, b, c, s;
  cin >> hostName >> b >> c;

  s = hostName + b;

  sort(s.begin(), s.end());
  sort(c.begin(), c.end());

  if (s == c)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}