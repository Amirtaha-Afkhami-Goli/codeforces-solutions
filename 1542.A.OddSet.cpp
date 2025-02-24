#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long counter = 0;
    for (int i = 0; i < 2 * n; i++)
    {
      int input;
      cin >> input;
      if (input % 2 == 1)
      {
        counter++;
      }
    }
    cout << (counter == n ? "Yes" : "No") << endl;
  }
  return 0;
}