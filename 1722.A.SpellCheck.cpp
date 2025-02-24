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
    string s;
    cin >> n;
    cin >> s;
    string ans = "Timur";
    sort(s.begin(), s.end());
    sort(ans.begin(), ans.end());
    cout << (s == ans ? "YES" : "NO") << endl;
  }
}