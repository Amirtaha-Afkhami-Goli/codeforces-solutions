// #include <iostream>
// using namespace std;
// #define ll long long
// ll factorial(ll n)
// {
//   ll answer = 1;
//   for (ll i = 0; i < n; i++)
//   {
//     answer *= i;
//   }
//   return answer;
// }
// ll combination(ll n, ll m)
// {
//   ll answer = factorial(m) / (factorial(n) * factorial(m - n));
//   return answer;
// }
// ll findNthDigit(ll n)
// {
//   ll len = 1;
//   ll cnt = 9;
//   ll start = 1;
//   while (n > len * cnt)
//   {
//     n -= len * cnt;
//     cnt *= 10;
//     start *= 10;
//     len++;
//   }
//   start += (n - 1) / len;
//   string s = to_string(start);
//   return s[(n - 1) % len] - '0';
// }
// int main()
// {
//   int testCases;
//   cin >> testCases;
//   while (testCases--)
//   {
//     ll answer = 1, num;
//     cin >> num;
//     ll len = to_string(num).length();
//     for (ll i = 0; i < len; i++)
//     {
//       answer *= combination(2, findNthDigit(num));
//     }
//     cout << answer << endl;
//   }
//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long answer = 1;
    while (n != 0)
    {
      int x = n % 10;
      answer *= (x + 1) * (x + 2) / 2;
      n /= 10;
    }
    cout << answer << endl;
  }
  return 0;
}