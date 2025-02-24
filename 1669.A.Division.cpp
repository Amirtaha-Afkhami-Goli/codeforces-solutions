#include <iostream>
using namespace std;
int main()
{
  int testCases, input;
  cin >> testCases;
  while (testCases--)
  {
    cin >> input;
    cout << "Division ";
    if (input >= 1900)
      cout << "1";
    else if (1899 >= input && input >= 1600)
      cout << "2";
    else if (1599 >= input && input >= 1400)
      cout << "3";
    else
      cout << "4";
    cout << '\n';
  }
  return 0;
}