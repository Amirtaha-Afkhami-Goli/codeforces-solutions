#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long testCases, answer = 0, input, xs = 0, ys = 0, zs = 0;
  cin >> testCases;
  while (testCases--)
  {
    for (int i = 0; i < 3; i++)
    {
      cin >> input;
      if (i == 0)
        xs += input;
      else if (i == 1)
        ys += input;
      else if (i == 2)
        zs += input;
    }
  }
  if (xs == 0 && ys == 0 &&  zs == 0)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}