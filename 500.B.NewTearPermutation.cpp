// #include <bits/stdc++.h>
// using namespace std;
// int n;
// vector<vector<int>> graph;
// void getMat()
// {
//   cin >> n;
//   parent.resize(n);
//   string arr[n];
//   graph.resize(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//     for (int j = 0; j < n; j++)
//     {
//       if (arr[i][j] == '1')
//       {
//         graph[i].push_back(j);
//         graph[j].push_back(i);
//       }
//     }
//   }
// }
// vector<int> parent;
// void makeSet(int v)
// {
//   parent[v] = v;
// }
// int findSet(int v)
// {
//   if (v == parent[v])
//     return v;
//   return findSet(parent[v]);
// }
// void unionSets(int a, int b)
// {
//   a = findSet(a);
//   b = findSet(b);
//   if (a != b)
//     parent[b] = a;
// }
// vector<vector<int>> sets;
// int main()
// {
//   getMat();
//   for (int i = 0; i < graph.size(); i++)
//   {
//     makeSet(i);
//   }
//   for (int i = 0; i < graph.size(); i++)
//   {
//     findSet(i);
//   }
//   for (int i = 0; i < graph.size(); i++)
//   {
//     for (int j = 0; j < graph[i].size(); j++)
//     {
//       unionSets(i, j);
//     }
//   }
//   vector<vector<int>> parts;
//   for (int i = 0; i < n; i++)
//   {
//     parts[parent[i]].push_back(i);
//   }
//   for (int i = 0; i < parts.size(); i++)
//   {
//     sort(parts[i].begin(), parts[i].end());
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cout << parts[parent[i]][0] << " ";
//     parts[i].erase(parts[i].begin());
//   }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int maxn = 3e3 + 3;
int n, a[maxn], ans[maxn], par[maxn];
vector<int> numbers[maxn], lable[maxn], parent;

int get_par(int u)
{
  return (~par[u] ? par[u] = get_par(par[u]) : u);
}

void merge(int u, int v)
{
  u = get_par(u), v = get_par(v);
  if (u == v)
    return;
  par[u] = v;
}

void read_input()
{
  memset(par, -1, sizeof(par));
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      char c;
      cin >> c;
      if (c == '1')
        merge(i, j);
    }
}

void solve()
{
  for (int i = 0; i < n; i++)
  {
    lable[get_par(i)].push_back(i);
    numbers[get_par(i)].push_back(a[i]);
    parent.push_back(get_par(i));
  }
  sort(parent.begin(), parent.end());
  parent.resize(unique(parent.begin(), parent.end()) - parent.begin());
  for (int p : parent)
  {
    sort(numbers[p].begin(), numbers[p].end());
    for (int i = 0; i < lable[p].size(); i++)
      ans[lable[p][i]] = numbers[p][i];
  }
  for (int i = 0; i < n; i++)
    cout << ans[i] << ' ';
}

int main()
{
  read_input(), solve();
  return 0;
}