#include <iostream>
using namespace std;
int main()
{
  int numOfStudents;
  cin >> numOfStudents;
  int students[numOfStudents];
  for (int i = 0; i < numOfStudents; i++)
  {
    cin >> students[i];
  }
  for (int i = 0; i < numOfStudents; i++)
  {
    int CountOfBiggers = 1;
    for (int j = 0; j < numOfStudents; j++)
    {
      if (j != i && students[j] > students[i])
      {
        CountOfBiggers++;
      }
    }
    cout << CountOfBiggers << " ";
  }
  return 0;
}