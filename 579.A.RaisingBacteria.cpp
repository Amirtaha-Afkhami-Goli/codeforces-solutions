#include <iostream>
using namespace std;
string convertNumber(int n)
{
  string answer = "";
  while (n != 0)
  {
    if (n % 2 == 0)
    {
      answer = "0" + answer;
    }
    else
    {
      answer = "1" + answer;
    }
    n /= 2;
  }
  return answer;
}
int main()
{
  int x;
  cin >> x;
  string s = convertNumber(x);
  int ans = 0;
  for (char c : s)
  {
    if (c == '1')
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

//*Important
/*
#include <bits/stcdc++.h>
using namespace std;
int main()
{
  int x;
  cin >> x;
  cout << __builim_popcount(x);
  return 0;
}
*/