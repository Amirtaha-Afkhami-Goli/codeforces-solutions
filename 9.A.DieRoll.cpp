#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int w, b, maximum, goodPoints, denominator;
  cin >> w >> b;
  maximum = max(w, b);
  cout << (6 - maximum + 1) / __gcd(6 - maximum + 1, 6) << "/" << 6 / __gcd(6 - maximum + 1, 6);
  return 0;
}