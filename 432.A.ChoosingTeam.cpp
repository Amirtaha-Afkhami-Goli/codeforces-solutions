#include <iostream>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  int students[n];
  int teamMembers = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> students[i];
    if (5 - students[i] >= k)
      teamMembers++;
  }
  cout << teamMembers / 3 << endl;
}