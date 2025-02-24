#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, input;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> input;
      sum += input;
    }
    cout << (sum % 2 == 0 ? "YES" : "NO") << endl;
  }
  return 0;
}