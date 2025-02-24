#include <iostream>
using namespace std;
int main()
{
  int numOfMagnets, numOfGroups = 1;
  cin >> numOfMagnets;
  string magnet;
  string magnets[numOfMagnets];
  for (int i = 0; i < numOfMagnets; i++)
  {
    cin >> magnet;
    magnets[i] = magnet;
  }
  for (int i = 0; i < numOfMagnets; i++)
  {
    if (magnets[i][1] == magnets[i + 1][0])
    {
      numOfGroups++;
    }
  }
  cout << numOfGroups;
  return 0;
}