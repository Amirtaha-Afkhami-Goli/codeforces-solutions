#include <iostream>
using namespace std;
int main()
{
  unsigned int year;
  cin >> year;
  int d1, d2, d3, d4;
  while (true)
  {
    year++;
    d1 = year / 1000;
    d2 = (year % 1000) / 100;
    d3 = (year % 100) / 10;
    d4 = year % 10;
    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
    {
      break;
    }
  }
  cout << year;
  return 0;
}