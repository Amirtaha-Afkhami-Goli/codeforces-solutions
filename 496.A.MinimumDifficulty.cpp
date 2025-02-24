#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
  ll length, maximum = 0, distance, answer = 1e9;
  cin >> length;
  ll track[length], distances[length - 1];
  cin >> track[0];
  for (int i = 1; i < length; i++)
  {
    cin >> track[i];
    distance = track[i] - track[i - 1];
    distances[i] = distance;
    maximum = max(maximum, distance);
  }
  for (int i = 2; i < length; i++)
  {
    answer = max(maximum, min(answer, distances[i] + distances[i - 1]));
  }
  cout << answer;
  return 0;
}