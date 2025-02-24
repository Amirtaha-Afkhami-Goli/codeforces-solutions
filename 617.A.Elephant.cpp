#include <iostream>
using namespace std;
int main()
{
  int positionOfFriend, numOfSteps;
  cin >> positionOfFriend;
  numOfSteps = positionOfFriend / 5;
  if (positionOfFriend % 5 != 0)
  {
    numOfSteps++;
  }
  cout << numOfSteps;
  return 0;
}