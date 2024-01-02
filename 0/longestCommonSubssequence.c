#include <stdio.h>
#include <string.h>

int i, j, m, n, lcs_table[20][20];
char s1[20] = "ABCBDAB", s2[20] = "BDCABA", lcsalgo[20];

void lcsalgo()
{
    m = strlen(s1); // 7
    // printf("%d\n", m);
    n = strlen(s2); //6
    for (int i = 0; i <= m; i++)
    {
        lcs_table[i][0] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        lcs_table[0][i] = 0;
    }
    for (int i = 1; i <= m; i++) // m = 7
    {
        for (int j = 1; j <= n; j++) // n = 6
        {
            if (s1[i - 1] == s2[j - 1]) // s1[1] == s2[4] for i =2 and j=5 ( A  == A)
            {
                lcs_table[i][j] = lcs_table[i - 1][j - 1] + 1; // lcs_table[1][4] = lcs_table[0][3] +1
            }
            else if (lcs_table[i - 1][j] >= lcs_table[i][j - 1])//lcs_table[0][1] >= lcs_table[1][0] (0>=0)
            {
                lcs_table[i][j] = lcs_table[i - 1][j];//lcs_table[1][1] = lcs_table[0][1] put 0
            }
            else
            {
                lcs_table[i][j] = lcs_table[i][j - 1];
            }
        }
    }
    int index = lcs_table[m][n];//index = lcs_table[7][6] (4)
    lcsalgo[index] = '\0';// lcsalgo[4] = '\0';
    int i = m, j = n;// i=7 j=6
    while (i > 0 && j > 0)
    {

        if (s1[i - 1] == s2[j - 1])//s1[6] == s2 [4] ()
        {
            index--;// index = 3
            lcsalgo[index] = s1[i - 1]; // lcsalgo[3] = B
            i--; // i = 6
            j--; // j = 4
        }
        else if (lcs_table[i - 1][j] > lcs_table[i][j - 1])// lcs_table[6][6] !> lcs_table[7][5] ( )
        {
            i--;
        }
        else
            j--; // j=5
    }
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("lcs = %s\n", lcsalgo);
}

int main()
{
    lcsalgo();
    return 0;
}
