#include <iostream>
#define mod 1000000007
long long int dp[2005][2005];
using namespace std;
int main()
{
  long long int n, k , sum = 0;
  cin >> n >> k;
  for (long long int i = 0; i <= k; i++)
    for (int j = 1; j <= n; j++)
      dp[i][j] = 0;
  for (long long int i = 0; i <= n; i++)
    dp[1][i] = 1;
  for (long long int i = 2; i <= k; i++)
    for (long long int j = 1; j <= n; j++)
      for (long long int l = j; l <= n; l += j)
        dp[i][l] = (dp[i][l] + dp[i - 1][j]) % mod;

  for (long long int i = 1; i <= n; i++)
  {
    sum = (sum + dp[k][i]) % mod;
  }
  cout << sum % mod << endl;
  return 0;
}