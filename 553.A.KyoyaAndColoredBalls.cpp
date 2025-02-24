#include <iostream>
using namespace std;
int main()
{
  long int mod = 1000000007;
  long long DP[1005][1005];
  for(long long i = 0; i < 1005; i++)
  {
    for (long long j = 0; j <= i; j++)
    {
      if (j==0)
      {
        DP[i][j] = 1;
      }
      else
      {
        DP[i][j] = (DP[i-1][j] + DP[i-1][j-1]) % mod;
      }
    }
  }
  long long n;
  cin >> n;
  long long numOfBalls = 0;
  long long ans = 1;
  while (n--)
  {
    long long inp;
    cin >> inp;
    ans = (ans * DP[numOfBalls + inp -1][inp - 1]) % mod;
    numOfBalls += inp;
  }
  cout << ans << endl;
  return 0;
}