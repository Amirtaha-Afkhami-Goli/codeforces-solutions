#include <bits/stdc++.h>
using namespace std;
int main()
{
  int numOfStops, input, output, max = -1, numOfInTram = 0;
  cin >> numOfStops;
  for (int i = 0; i < numOfStops; i++)
  {
    cin >> output >> input;
    numOfInTram += input - output;
    if (numOfInTram > max)
    {
      max = numOfInTram;
    }
  }
  cout << max;
  return 0;
}