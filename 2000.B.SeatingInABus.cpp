#include <iostream>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, a;
    cin >> n;
    cin >> a;
    ll ls = a - 1, rs = a + 1;
    bool isValid = true;
    for (ll i = 1; i < n; i++)
    {
      cin >> a;
      if (a == ls)
        ls--;
      else if (a == rs)
        rs++;
      else
        isValid = false;
    }
    cout << (isValid ? "YES" : "NO") << endl;
  }
}