#include <iostream>
using namespace std;
int main()
{
  int numOfTests, firstNum, secondNum, counter, d;
  cin >> numOfTests;
  for (int i = 0; i < numOfTests; i++)
  {
    counter = 0;
    cin >> firstNum >> secondNum;
    d = firstNum - secondNum;
    if (d % secondNum != 0)
    {
      counter = secondNum - (firstNum % secondNum);
    }
    cout << counter << endl;
  }
  return 0;
}