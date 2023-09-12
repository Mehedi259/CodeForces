#include <bits/stdc++.h>
using namespace std;

int T;
int N;
int cnt[17576];

int A[1000];
int B[1000];
int C[1000];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        memset(cnt, 0, sizeof(cnt));
        cin >> N;
        for (int n = 0; n < N; n++)
        {
            string S;
            cin >> S;
            A[n] = (S[0] - 'a') + (S[1] - 'a') * 26 + (S[2] - 'a') * 676;
            cnt[A[n]]++;
        }
        for (int n = 0; n < N; n++)
        {
            string S;
            cin >> S;
            B[n] = (S[0] - 'a') + (S[1] - 'a') * 26 + (S[2] - 'a') * 676;
            cnt[B[n]]++;
        }
        for (int n = 0; n < N; n++)
        {
            string S;
            cin >> S;
            C[n] = (S[0] - 'a') + (S[1] - 'a') * 26 + (S[2] - 'a') * 676;
            cnt[C[n]]++;
        }
        int a = 0;
        int b = 0;
        int c = 0;
        for (int n = 0; n < N; n++)
        {
            if (cnt[A[n]] == 1)
                a += 3;
            if (cnt[A[n]] == 2)
                a += 1;
            if (cnt[B[n]] == 1)
                b += 3;
            if (cnt[B[n]] == 2)
                b += 1;
            if (cnt[C[n]] == 1)
                c += 3;
            if (cnt[C[n]] == 2)
                c += 1;
        }
        cout << a << ' ' << b << ' ' << c << '\n';
    }
}
