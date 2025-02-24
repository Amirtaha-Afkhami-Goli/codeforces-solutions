#include <iostream>
#include <string>
using namespace std;
int main()
{
  string firstWord, secondWord;
  cin >> firstWord >> secondWord;
  string firstToLower, secondToLower;
  for (char l : firstWord)
  {
    firstToLower += tolower(l);
  }
  for (char l : secondWord)
  {
    secondToLower += tolower(l);
  }
  if (firstToLower == secondToLower)
  {
    cout << 0;
  }
  else if (firstToLower > secondToLower)
  {
    cout << 1;
  }
  else
  {
    cout << -1;
  }
  return 0;
}