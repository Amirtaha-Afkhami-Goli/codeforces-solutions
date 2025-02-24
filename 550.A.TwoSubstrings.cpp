#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int pos1 = s.find("AB");
  int pos2 = s.find("BA", pos1 + 2);
  int posp1 = s.find("BA");
  int posp2 = s.find("AB", posp1 + 2);
  if ((pos1 != -1 && pos2 != -1) || (posp1 != -1 && posp2 != -1))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}