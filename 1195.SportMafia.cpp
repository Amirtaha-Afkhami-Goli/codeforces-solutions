#include <iostream>
using namespace std;
int main()
{
  long long k, num, m;
  cin >> num >> m;
  long long sum = 0;
  for (long long i = 1; i <= num; i++)
  {
    sum += i;
    long long ans = sum - m;
    if (ans >= 0 && i + ans == num)
    {
      cout << ans << endl;
      break;
    }
  }
  return 0;
}