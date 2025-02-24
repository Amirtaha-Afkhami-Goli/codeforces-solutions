#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main(void)
{
  int k, i, cnt = 0;
  cin >> k;
  for (i = 19; i < 10e9; i += 9)
  {
    if (sumOfDigits(i) == 10)
    {
      ++cnt;

      if (cnt == k)
      {
        cout << i;
        break;
      }
    }
  }
  return 0;
}