#include <iostream>
using namespace std;
int main()
{
  int numOfCases, numOfCandies, numOfWays = 0;
  cin >> numOfCases;
  for (int i = 0; i < numOfCases; i++)
  {
    numOfWays = 0;
    cin >> numOfCandies;
    if (numOfCandies % 2 == 0)
    {
      numOfWays = (numOfCandies / 2) - 1;
    }
    else
    {
      numOfWays = (numOfCandies / 2);
    }
    cout << numOfWays << endl;
  }
  return 0;
}