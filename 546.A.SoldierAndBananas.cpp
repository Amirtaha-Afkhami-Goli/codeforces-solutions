#include <iostream>
using namespace std;
int main()
{
  unsigned int costOfFirstBanana, budget, numOfBananas, totalCost;
  cin >> costOfFirstBanana >> budget >> numOfBananas;
  totalCost = (numOfBananas * (numOfBananas + 1) / 2) * costOfFirstBanana;
  if (totalCost <= budget) {
    cout << 0;
  }
  else {
    cout << totalCost - budget;
  }
  return 0;
}