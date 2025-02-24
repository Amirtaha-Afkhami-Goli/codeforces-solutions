#include <iostream>
using namespace std;
int main()
{
  long t;
  cin >> t;
  while (t--)
  {
    long n;
    cin >> n;
    long maximum = 0, minimum = 1e9 + 7;
    for (long i = 0; i < n; i++)
    {
      long x;
      cin >> x;
      minimum = (minimum < x) ? minimum : x;
      maximum = (maximum > x) ? maximum : x;
    }
    cout << maximum - minimum << endl;
  }
  return 0;
}