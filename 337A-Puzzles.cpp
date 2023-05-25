#include <iostream>
using namespace std;
int main()
{
    /* read(n, m, f[1..m])
  sort(f[1..m])
  best = INFINITY
  for k = 1 to m-n
    best = min(best, f[k+n-1] - f[k])
  print best*/
    int m, n, f[m], i;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f[i].begin(),f[m].end());
    int best = 1000000000;
    for(int)

}