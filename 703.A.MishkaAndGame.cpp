#include <iostream>
using namespace std;
int main()
{
  int testCases, first = 0, second = 0, a, b;
  cin >> testCases;
  while (testCases--)
  {
    cin >> a >> b;
    if (a > b)
    {
      first++;
    }
    else if (a < b)
    {
      second++;
    }
  }
  if (first > second)
  {
    cout << "Mishka";
  }
  else if (first == second)
  {
    cout << "Friendship is magic!^^";
  }
  else
  {
    cout << "Chris";
  }
  return 0;
}