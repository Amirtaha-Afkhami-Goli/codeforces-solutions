#include <iostream>
using namespace std;
int main()
{
  unsigned int numOfGames, as = 0, ds = 0;
  cin >> numOfGames;
  string gamesStatus;
  cin >> gamesStatus;
  for (char c : gamesStatus)
  {
    if (c == 'A')
    {
      as++;
    }
    else
    {
      ds++;
    }
  }
  if (as > ds)
  {
    cout << "Anton";
  }
  else if (as == ds)
  {
    cout << "Friendship";
  }
  else
  {
    cout << "Danik";
  }
  return 0;
}