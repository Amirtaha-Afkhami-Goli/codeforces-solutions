#include <iostream>
using namespace std;
int main()
{
  int numOfButtles, sum = 0, percentage;
  cin >> numOfButtles;
  for (int i = 0; i < numOfButtles; i++)
  {
    cin >> percentage;
    sum += percentage;
  }
  cout << float(sum) / numOfButtles;
  return 0;
}