#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
int main()
{
  ull h, w, n;
  cin >> w >> h >> n;
  long dp[w][h];
  memset(dp, 0, sizeof(dp));
  // setting black poits
  for (ull i = 0; i < n; i++)
  {
    int lo, la;
    cin >> lo >> la;
    dp[la - 1][lo - 1] = -1;
  }
  // setting first row and column to 1 till the first black one
  for (ull i = 0; i < w; i++)
  {

    if (dp[0][i] != -1)
    {
      dp[0][i] = 1;
    }
    else
    {
      break;
    }
  }
  for (ull i = 0; i < h; i++)
  {

    if (dp[i][0] != -1)
    {
      dp[i][0] = 1;
    }
    else
    {
      break;
    }
  }
  // updating each point
  for (ull i = 1; i < h; i++)
  {
    for (ull j = 1; j < w; j++)
    {
      if (dp[i][j] != -1)
      {
        if ((dp[i - 1][j] != -1) && (dp[i][j - 1] != -1))
        {
          dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
        else if ((dp[i - 1][j] != 0) || (dp[i][j - 1] != 0))
        {
          if (dp[i - 1][j] == -1 && dp[i][j - 1] == -1)
          {
            continue;
          }
          else if (dp[i - 1][j] == -1)
          {
            dp[i][j] = dp[i][j - 1] % MOD;
          }
          else
          {
            dp[i][j] = dp[i - 1][j] % MOD;
          }
        }
      }
    }
  }
  // cout << endl
  //      << "-------------" << endl;
  // for (int i = 0; i < h; i++)
  // {
  //   for (int j = 0; j < w; j++)
  //   {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl
  //      << "-------------" << endl;
  cout << dp[h - 1][w - 1] % MOD;
  return 0;
}