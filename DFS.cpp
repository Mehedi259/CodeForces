#include <bits/stdc++.h>
using namespace std;


#define MAX 10000
vector<vector<int>> edges(MAX);



bool visited[MAX];
void dfs(int node)
{
    visited[node] = true;
    cout << node << ' ';
    for (auto it: edges[node])
    {
        if (!visited[it])
        {
            dfs(it);
        }
    }
}
int main()
{

    edges[1].emplace_back(2);
    edges[2].emplace_back(1);
    edges[1].emplace_back(3);
    edges[3].emplace_back(1);
    edges[3].emplace_back(4);
    edges[4].emplace_back(3);
    edges[2].emplace_back(4);
    edges[4].emplace_back(2);
    edges[1].emplace_back(7);
    edges[7].emplace_back(1);
    edges[7].emplace_back(9);
    edges[9].emplace_back(7);
    dfs(1);
}