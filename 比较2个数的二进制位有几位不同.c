#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 
void compare(int n, int m)
{
	int tmp = 0;
	tmp = n ^ m;
	int  i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((tmp >> i)&1 == 1)
			count++;
	}
	printf("%d\n", count);

}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	compare(n, m);

	return 0;
}