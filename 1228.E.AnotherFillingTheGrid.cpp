#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long pow(long long n, long long p)
{
  long long res = 1;
  for (long long i = 1; i <= p; i++)
  {
    res *= n;
  }
  return res;
}
unsigned long long C(unsigned long long n, unsigned long long r)
{
  double sum = 1;
  for (int i = 1; i <= r; i++)
  {
    sum = sum * (n - r + i) / i;
  }
  return (int)sum;
}

int main()
{
  long long n, k;
  cin >> n >> k;
  long long ans = 0;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
        ans += pow(-1, i + j) * C(n, i) * C(n, j) * pow(k - 1, i * n) * pow(k - 1, j * (n - j)) * pow(k, n * n - (i + j - j * j));
        ans %= mod;
    }
  }
  cout << ans;
  return 0;
}