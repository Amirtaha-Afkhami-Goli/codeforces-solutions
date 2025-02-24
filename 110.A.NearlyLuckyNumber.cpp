#include <iostream>
using namespace std;
bool isLucky(string number)
{
  for (int i = 0; i < number.length(); i++)
  {
    if (number[i] != '4' && number[i] != '7')
    {
      return false;
    }
  }
  return true;
}
int main()
{
  string number;
  cin >> number;
  unsigned int numOfLuckyDigits = 0;
  for (char c : number)
  {
    if (c == '4' or c == '7')
    {
      numOfLuckyDigits++;
    }
  }
  if (isLucky(to_string(numOfLuckyDigits)))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}