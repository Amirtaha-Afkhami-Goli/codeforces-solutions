#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long counter = 0;
  long long p[n];
  for (long long i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  sort(p, p + n);
  for (long long i = 0; i < n; i++)
  {
    if (p[i] > p[0] && p[i] < p[n - 1])
      counter++;
  }
  cout << counter;
  return 0;
}