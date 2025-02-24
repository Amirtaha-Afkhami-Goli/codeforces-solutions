#include <iostream>
#include <string.h>
#define mod 100000000
using namespace std;
int dp[1001][1001][2];
int main()
{
  int n, m, k1, k2;
  cin >> n >> m >> k1 >> k2;
  memset(dp, 0, sizeof(dp));
  dp[0][0][0] = dp[0][0][1] = 1;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= m; j++)
    {
      for (int k = 1; k <= k1 && k <= i; k++)
      {
        dp[i][j][0] += dp[i - k][j][1];
        dp[i][j][0] %= mod;
      }
      for (int k = 1; k <= k2 && k <= j; k++)
      {
        dp[i][j][1] += dp[i][j - k][0];
        dp[i][j][0] %= mod;
      }
    }
  }
  cout << (dp[n][m][0] + dp[n][m][1]) % mod << endl;
  return 0;
}