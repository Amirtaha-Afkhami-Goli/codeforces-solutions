#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    long long int n, k;
    cin >> n >> k;
    long long int l;
    if (k % (n - 1) == 0)
      l = k + (k / (n - 1)) - 1;
    else
      l = k + (k / (n - 1));
    cout << l << endl;
  }
  return 0;
}