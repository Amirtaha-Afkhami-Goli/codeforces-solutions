#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int tcs;
  cin >> tcs;
  for (int t = 1; t <= tcs; ++t)
  {
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> scheduals;
    for (int i = 1; i <= n; ++i)
    {
      int ent, exi;
      cin >> ent >> exi;
      scheduals.push_back({ent, -i});
      scheduals.push_back({exi, i});
    }
    sort(scheduals.begin(), scheduals.end());
    int right = -1, counter = 0;
    int bestTime = 2e9;
    for (int left = 0; left < scheduals.size(); ++left)
    {
      while ((counter < p && right + 1 < scheduals.size()) || right < 1)
      {
        ++right;
        if (scheduals[right].second < 0)
        {
          ++counter;
        }
      }
      if (counter == p)
      {
        bestTime = min(bestTime, scheduals[right].first - scheduals[left].first);
      }
      if (scheduals[left].second > 0)
      {
        --counter;
      }
    }
    cout << "Case " << t << ": " << bestTime << endl;
  }
  return 0;
}