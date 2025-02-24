#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  vector<long long> v;
  vector<long long> pre;
  long long sm = 0;
  pre.push_back(0);
  for (int i = 0; i < n; i++)
  {
    long long t;
    cin >> t;
    sm += t;
    pre.push_back(sm);
    v.push_back(t);
  }
  set<long long> s;
  long long j = 0;
  s.insert(0);
  long long ans = 0;
  for (long long i = 0; i < n; i++)
  {
    while (j < n && s.find(pre[j + 1]) == s.end())
    {
      j++;
      s.insert(pre[j]);
    }
    ans += j - i;
    s.erase(pre[i]);
  }
  cout << ans << "\n";
  return 0;
}