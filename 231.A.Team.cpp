#include <iostream>
using namespace std;
int main()
{
  int numberOfProblems;
  int numberOfSolutions;
  int numberOfSolvedProblems = 0;
  int solutionStatus;
  cin >> numberOfProblems;
  int solutions[numberOfProblems][3];
  for (int i = 0; i < numberOfProblems; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> solutionStatus;
      solutions[i][j] = solutionStatus;
    }
  }
  for (int i = 0; i < numberOfProblems; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (solutions[i][j] == 1)
      {
        numberOfSolutions++;
      }
    }
    if (numberOfSolutions >= 2)
    {
      numberOfSolvedProblems++;
    }
    numberOfSolutions = 0;
  }
  cout << numberOfSolvedProblems;
  return 0;
}