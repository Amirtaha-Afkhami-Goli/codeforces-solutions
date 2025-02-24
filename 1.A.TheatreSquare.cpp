#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n, m, a, ms, ns, answer;
  cin >> n >> m >> a;
  if (m % a == 0)
  {
    ms = m / a;
  }
  else
  {
    ms = m / a + 1;
  }
  if (n % a == 0)
  {
    ns = n / a;
  }
  else
  {
    ns = n / a + 1;
  }
  answer = ms * ns;
  cout << answer << endl;
  return 0;
}