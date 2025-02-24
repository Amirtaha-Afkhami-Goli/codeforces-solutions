#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int numOfCitizens, max, total = 0;
  cin >> numOfCitizens;
  int citizens[numOfCitizens];
  for (int i = 0; i < numOfCitizens; i++)
  {
    cin >> citizens[i];
  }
  sort(citizens, citizens + numOfCitizens);
  max = citizens[numOfCitizens - 1];
  for (int i : citizens)
  {
    total += max - i;
  }
  cout << total;
  return 0;
}