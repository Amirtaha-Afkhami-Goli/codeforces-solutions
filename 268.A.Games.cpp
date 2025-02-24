#include <iostream>
using namespace std;
int main()
{
  int numOfTeams, ans = 0;
  cin >> numOfTeams;
  int uniforms[numOfTeams][2];
  for (int i = 0; i < numOfTeams; i++)
  {
    cin >> uniforms[i][0] >> uniforms[i][1];
  }
  for (int i = 0; i < numOfTeams; i++)
  {
    for (int j = 0; j < numOfTeams; j++)
    {
      if (i != j && uniforms[i][0] == uniforms[j][1])
      {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}