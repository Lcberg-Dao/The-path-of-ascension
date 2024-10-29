#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//
//    scanf("%d", &n);
//
//    char arr[10000];
//    int i = 0;
//    int j = 0;
//
//    while (n!=0)
//    {
//
//        if (j!=0 && j % 3 == 0)
//        {
//            arr[i++] = ',';
//        }
//        arr[i++] = n % 10 + '0';
//        n /= 10;
//        j++;
//    }
//
//    int k = 0;
//    for (k = i-1; k >0; k--)
//    {
//        printf("%c", arr[k]);
//    }
//
//    return 0;
//}