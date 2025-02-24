#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  int x = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string ope = "";
    cin >> ope;
    for (int j = 0; j < ope.length(); j++)
    {
      if (ope[j] == '+') {
        x++;
        break;
      }
      else if (ope[j] == '-') {
        x--;
        break;
      } 
    }
  }
  cout << x;
}
