#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;

int main()
{

  cin >> n;
  vector<pair<int, int>> vec1, vec2;
  while (n--)
  {
    int x, y;
    cin >> x >> y;
    if (x > 0)
    {
      vec1.push_back(make_pair(x, y));
    }
    else
    {
      vec2.push_back(make_pair(-1 * x, y));
    }
  }
  sort(vec1.begin(), vec1.end());
  sort(vec2.begin(), vec2.end());
  if (vec1.size() == vec2.size())
  {
    for (int i = 0; i < vec1.size(); i++)
    {
      ans += vec1[i].second;
      ans += vec2[i].second;
    }
  }
  else
  {
    int mini = min(vec1.size(), vec2.size());
    for (int i = 0; i < mini; i++)
    {
      ans += vec1[i].second + vec2[i].second;
    }
    if (vec1.size() > mini)
    {
      ans += vec1[mini].second;
    }
    else
    {
      ans += vec2[mini].second;
    }
  }
  cout << ans;

  return 0;
}
