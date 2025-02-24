#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int ans;
    cin >> ans;
    string s;
    cin >> s;
    while((s[0] == '0' && s[ans-1] == '1') || (s[0] == '1' && s[ans-1] == '0'))
    {
      ans -= 2;
      s = s.substr(1, s.size() - 1);
    }
    cout << ans << endl;
  }
  return 0;
}