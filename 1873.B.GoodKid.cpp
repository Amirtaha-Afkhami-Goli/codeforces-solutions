#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int gifts[n];
    long long product = 1;
    for (int i = 0; i < n; i++)
    {
      cin >> gifts[i];
    }
    sort(gifts, gifts + n);
    gifts[0]++;
    for (int i : gifts)
    {
      product *= i;
    }
    cout << product << endl;
  }
  return 0;
}