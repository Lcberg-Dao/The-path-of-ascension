#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
    int n = 0;
    int m = 0;
    scanf("%d%d", &n, &m);
    int a[n][m];
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //×ªÖÃ
    for (i = 0; i < m; i++)//3
    {
        for (j = 0; j < n; j++)//2
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}