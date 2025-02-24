#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a;
    cin >> a;
    a++;
    a /= 2;
    cout << a << endl;
  }
  return 0;
}