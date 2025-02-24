#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string word;
  string words[n];
  for (int i = 0; i < n; i++)
  {
    cin >> word;
    words[i] = word;
  }
  for (int i = 0; i < n; i++)
  {
    if (words[i].length() > 10)
    {
      int len = words[i].length();
      string firstChar = words[i].substr(0, 1);
      string lasChar = words[i].substr(len - 1, len);
      string output = firstChar.append(to_string(len - 2)).append(lasChar);
      cout << output;
    }
    else
    {
      cout << words[i];
    }
    cout << "\n";
  }
  return 0;
}