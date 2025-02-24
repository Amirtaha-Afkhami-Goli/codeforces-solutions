#include <iostream>
using namespace std;
int main()
{
  int numOfSoldiers, maxIndex = 0, minIndex = 0, input, numOfMoves;
  cin >> numOfSoldiers;
  int soldiers[numOfSoldiers];
  for (int i = 0; i < numOfSoldiers; i++)
  {
    cin >> input;
    soldiers[i] = input;
    if (input > soldiers[maxIndex])
    {
      maxIndex = i;
    }
    else if (input <= soldiers[minIndex])
    {
      minIndex = i;
    }
  }
  if (maxIndex > minIndex)
  {
    numOfMoves = numOfSoldiers - minIndex - 1;
    numOfMoves += maxIndex - 1;
  }
  else
  {
    numOfMoves = numOfSoldiers - 1 - minIndex + maxIndex;
  }
  cout << numOfMoves;
  return 0;
}