#include <bits/stdc++.h>
using namespace std;
int main()
{
  int count = 0, numOfNumbers, indexOfDigit = 0;
  cin >> numOfNumbers;
  string number;
  for (int i = 0; i < numOfNumbers; i++)
  {
    set<int> digits;
    set<int> finalAnswer;
    count = 0;
    indexOfDigit = 0;
    cin >> number;
    for (char c : number)
    {
      indexOfDigit++;
      if (c != '0')
      {
        count++;
        digits.insert(((int)c - 48) * pow(10, number.length() - indexOfDigit));
      }
    }
    cout << count << endl;
    for (int j : digits)
    {
      finalAnswer.insert(j);
    }
    for (int j : finalAnswer)
    {
      cout << j << ' ';
    }
    cout << endl;
  }
}