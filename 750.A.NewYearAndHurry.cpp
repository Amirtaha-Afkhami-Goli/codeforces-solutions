#include <iostream>
using namespace std;
int main()
{
  int numOfProblems, time, accumulator = 0, input, totalTime = 240, counter = 0;
  cin >> numOfProblems >> time;
  totalTime -= time;
  for (int i = 1; i <= numOfProblems; i++)
  {
    if (totalTime - accumulator >= 5 * i)
    {
      accumulator += 5 * i;
      counter++;
    }
    else
    {
      break;
    }
  }
  cout << counter;
  return 0;
}