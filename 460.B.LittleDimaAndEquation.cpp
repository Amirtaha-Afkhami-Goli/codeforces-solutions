#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
int main()
{
  ll a, b, c, id = 0;
  ll arr[45];
  cin >> a >> b >> c;
  for (int i = 1; i <= 81; ++i)
  {
    ll tmp = 1, tmp2 = 0, tmp3, tmp4 = 0;
    for (int j = 1; j <= a; ++j)
      tmp *= i;
    tmp = tmp * b + c;
    tmp3 = tmp;
    while (tmp3 > 0)
    {
      tmp2 += (tmp3 % 10);
      tmp3 /= 10;
      tmp4++;
    }
    if (tmp4 > 9)
      continue;
    if (tmp2 == i)
      arr[id++] = tmp;
  }
  cout << id << endl;
  if (id > 0)
    cout << arr[0];
  for (int i = 1; i < id; ++i)
    cout << " " << arr[i];
  cout << endl;
  return 0;
}