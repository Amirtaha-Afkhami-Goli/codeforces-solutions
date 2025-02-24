#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int ans = 1;
  while (n--)
  {
    int input;
    cin >> input;
    if (input == 1)
      ans = -1;
  }
  cout << ans;
  return 0;
}