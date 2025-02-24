#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int coins[n];
  int sum = 0;
  int min;
  int max = 0;
  int secondSum = 0;
  int numOfCoins = 0;
  int maxIndex;
  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    coins[i] = m;
    sum += m;
  }
  min = sum / 2;
  while (secondSum <= min)
  {
    for (int i = 0; i < n; i++)
    {
      if (max <= coins[i])
      {
        max = coins[i];
        maxIndex = i;
      }
    }
    secondSum += max;
    coins[maxIndex] = 0;
    numOfCoins++;
    if (secondSum > min)
    {
      break;
    }
    if (maxIndex = n - 1)
    {
      max = 0;
    }
  }
  cout << numOfCoins;
  return 0;
}