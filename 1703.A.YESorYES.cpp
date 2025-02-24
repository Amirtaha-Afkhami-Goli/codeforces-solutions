#include <iostream>
using namespace std;
int main()
{
  int numOfWords;
  cin >> numOfWords;
  string words[numOfWords];
  string word;
  for (int i = 0; i < numOfWords; i++)
  {
    cin >> word;
    words[i] = word;
  }
  for (string yes : words)
  {
    if (toupper(yes[0]) == 'Y' && toupper(yes[1]) == 'E' && toupper(yes[2]) == 'S')
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}