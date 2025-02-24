#include <iostream>
using namespace std;
int main()
{
  int numOfStones;
  cin >> numOfStones;
  string sequenceOfColors;
  cin >> sequenceOfColors;
  int numOfMoves = 0;
  for (int i = 0; i < sequenceOfColors.length(); i++)
  {
    if (sequenceOfColors[i] == sequenceOfColors[i + 1])
    {
      numOfMoves++;
    }
  }
  cout << numOfMoves;
  return 0;
}