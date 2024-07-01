#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 5010
using ll = long long;

ll dp[MAX_SIZE][MAX_SIZE];
ll frequency[MAX_SIZE];

#define DP dp[index][ascensions]

ll calculateMinOperations(ll index, ll ascensions) {
    if (ascensions < 0)
        return -2;
    if (index == 0)
        return ascensions ? -2 : 0;
    if (~DP)
        return DP;

    if (frequency[index])
        DP = calculateMinOperations(index - 1, ascensions - 1);
    else
        DP = calculateMinOperations(index - 1, ascensions);

    if (calculateMinOperations(index - 1, ascensions) != -2 && calculateMinOperations(index - 1, ascensions) + frequency[index] <= ascensions) {
        if (DP == -2 || calculateMinOperations(index - 1, ascensions) + frequency[index] < DP) {
            DP = calculateMinOperations(index - 1, ascensions) + frequency[index];
        }
    }

    return DP;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        ll numElements;
        cin >> numElements;

        for (int i = 0; i <= numElements; i++)
            fill_n(dp[i], numElements + 1, -1);

        for (int i = 0; i < numElements; i++) {
            ll value;
            cin >> value;
            frequency[value]++;
        }

        ll result = numElements;
        for (int i = numElements; i >= 0; i--)
            if (calculateMinOperations(numElements, i) != -2)
                result = i;

        cout << result << '\n';

        fill_n(frequency, numElements + 1, 0ll);
    }
}
