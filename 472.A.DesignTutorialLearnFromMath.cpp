#include <iostream>
using namespace std;
bool isNotPrime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return true;
  return false;
}
int main()
{
  int num;
  cin >> num;
  for (int i = 2; i < num; i++)
  {
    if (isNotPrime(i) && isNotPrime(num - i))
    {
      cout << i << " " << num - i;
      break;
    }
  }
  return 0;
}