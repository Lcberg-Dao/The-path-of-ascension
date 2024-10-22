#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10];
//    int arr2[10][10];
//    int i = 0;
//    printf("\n");
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    printf("\n");
//
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//
//    int flag = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                flag = 0;
//            else
//            {
//                flag = 1;
//                break;
//            }
//        }
//    }
//    if (flag == 0)
//        printf("Yes\n");
//    else
//        printf("No\n");
//
//    return 0;
//}