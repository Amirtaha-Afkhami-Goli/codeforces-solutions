#include <iostream>
#include <set>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, input;
    cin >> n;
    set<int> numbers;
    while (n--)
    {
      cin >> input;
      numbers.insert(input);
    }
    cout << numbers.size() << endl;
  }
  return 0;
}