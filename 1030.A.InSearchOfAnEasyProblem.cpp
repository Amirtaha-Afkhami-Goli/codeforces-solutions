#include <iostream>
using namespace std;
int main()
{
  int numOfProblems, status;
  cin >> numOfProblems;
  bool isEasy = true;
  for (int i = 0; i < numOfProblems; i++)
  {
    cin >> status;
    if (status == 1)
    {
      isEasy = false;
      break;
    }
  }
  if (isEasy)
  {
    cout << "EASY";
  }
  else
  {
    cout << "HARD";
  }
  return 0;
}