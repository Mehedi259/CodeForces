#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <math.h>
using namespace std;
#define fio ios::sync_with_stdio(0), cin.tie(0);
typedef long long ll;
typedef long double ld;

char inp[505][505];
int R, C;
int main()
{
    scanf("%d %d", &R, &C);
    for (int i = 1; i <= R; i++)
    {
        scanf("%s", inp[i] + 1);
    }
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (inp[i][j] == 'W')
            {
                if (inp[i - 1][j] == 'S' || inp[i][j + 1] == 'S' || inp[i + 1][j] == 'S' || inp[i][j - 1] == 'S')
                    return !printf("No");
            }
        }
    }
    for (int i = 1; i <= R; i++)
        for (int j = 1; j <= C; j++)
        {
            if (inp[i][j] == '.')
                inp[i][j] = 'D';
        }
    printf("Yes\n");
    for (int i = 1; i <= R; i++)
        printf("%s\n", inp[i] + 1);
}