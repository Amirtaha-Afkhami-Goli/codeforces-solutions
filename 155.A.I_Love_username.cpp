#include <iostream>
using namespace std;
int main()
{
  int numOfContests, input;
  cin >> numOfContests;
  cin >> input;
  int max(input), min(input), counter(0);
  for (int i = 0; i < numOfContests - 1; i++)
  {
    cin >> input;
    if (input < min)
    {
      min = input;
      counter++;
    }
    else if (input > max)
    {
      max = input;
      counter++;
    }
  }
  cout << counter;
  return 0;
}