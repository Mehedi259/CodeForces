#include <vector>
#include <queue>
#include <functional>
using namespace std;
int n, freq[100];

int huffman()
{
    priority_queue<int, vector<int>, greater<int>> PQ;
    for (int i = 0; i < n; i++)
    {
        PQ.push(freq[i]);
    }
    while (PQ.size() != 1)
    {
        int a = PQ.top();
        PQ.pop();
        int b = PQ.top();
        PQ.pop();
        PQ.push(a+b);
    }
    return PQ.top();
}