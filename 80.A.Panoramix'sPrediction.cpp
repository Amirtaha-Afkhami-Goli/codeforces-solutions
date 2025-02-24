#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return false;
      break;
    }
  }
  return true;
}
int main()
{
  int n, m;
  cin >> n >> m;
  while (true)
  {
    n++;
    if (isPrime(n))
    {
      if (n == m)
      {
        cout << "YES";
        break;
      }
      else
      {
        cout << "NO";
        break;
      }
    }
  }
  return 0;
}