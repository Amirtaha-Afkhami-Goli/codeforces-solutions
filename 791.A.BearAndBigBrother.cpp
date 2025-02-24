#include <iostream>
using namespace std;
int main() {
  long int a, b;
  cin >> a >> b;
  int numOfYears = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    numOfYears++;
  }
  cout << numOfYears;
  return 0;
}