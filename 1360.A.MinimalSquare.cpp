#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int a, b, testCases;
  cin >> testCases;
  while (testCases--)
  {
    cin >> a >> b;
    if (a > b)
    {
      swap(a, b);
    }
    cout << max(a * 2, b) * max(a * 2, b) << endl;
  }
  return 0;
}