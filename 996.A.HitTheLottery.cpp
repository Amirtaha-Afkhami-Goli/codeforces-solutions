#include <iostream>
using namespace std;
int main()
{
  long long money, counter = 0;
  cin >> money;
  while (money >= 100)
  {
    money -= 100;
    counter++;
  }
  while (money >= 20)
  {
    money -= 20;
    counter++;
  }
  while (money >= 10)
  {
    money -= 10;
    counter++;
  }
  while (money >= 5)
  {
    money -= 5;
    counter++;
  }
  while (money >= 1)
  {
    money -= 1;
    counter++;
  }
  cout << counter;
  return 0;
}