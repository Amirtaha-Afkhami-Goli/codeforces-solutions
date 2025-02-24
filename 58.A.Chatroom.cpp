#include <bits/stdc++.h>
using namespace std;
int main()
{
  string word;
  cin >> word;
  int p = 0;
  while (p < word.length() && word[p] != 'h')
    p++;
  p++;
  while (p < word.length() && word[p] != 'e')
    p++;
  p++;
  while (p < word.length() && word[p] != 'l')
    p++;
  p++;
  while (p < word.length() && word[p] != 'l')
    p++;
  p++;
  while (p < word.length() && word[p] != 'o')
    p++;

  if (p < word.length())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}