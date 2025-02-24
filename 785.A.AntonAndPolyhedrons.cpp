#include <iostream>
using namespace std;
int main()
{
  int numOfFigures, totalFaces = 0;
  cin >> numOfFigures;
  string input;
  for (int i = 0; i < numOfFigures; i++)
  {
    cin >> input;
    if (input == "Tetrahedron")
    {
      totalFaces += 4;
    }
    else if (input == "Cube")
    {
      totalFaces += 6;
    }
    else if (input == "Octahedron")
    {
      totalFaces += 8;
    }
    else if (input == "Dodecahedron")
    {
      totalFaces += 12;
    }
    else if (input == "Icosahedron")
    {
      totalFaces += 20;
    }
  }
  cout << totalFaces;
  return 0;
}