#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> solved;
    for (char c : s)
    {
      solved.insert(c);
    }
    cout << n + solved.size() << endl;
  }
  return 0;
}