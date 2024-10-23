#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					if (a + b + c + d == 1)
					{
						if (a == 1 && c == 1 && d == 1 && d == 0)
						{
							if (a == 1)
								printf("a是凶手\n");
							else if (b == 1)
								printf("b是凶手\n");
							else if (c == 1)
								printf("c是凶手\n");
							else if (d == 1)
								printf("d是凶手\n");
						}
						else if (a == 0 && c == 0 && d == 1 && d == 0)
						{
							if (a == 1)
								printf("a是凶手\n");
							else if (b == 1)
								printf("b是凶手\n");
							else if (c == 1)
								printf("c是凶手\n");
							else if (d == 1)
								printf("d是凶手\n");
						}
						else if (a == 0 && c == 1 && d == 0 && d == 0)
						{
							if (a == 1)
								printf("a是凶手\n");
							else if (b == 1)
								printf("b是凶手\n");
							else if (c == 1)
								printf("c是凶手\n");
							else if (d == 1)
								printf("d是凶手\n");
						}
						else if (a == 0 && c == 1 && d == 1 && d == 1)
						{
							if (a == 1)
								printf("a是凶手\n");
							else if (b == 1)
								printf("b是凶手\n");
							else if (c == 1)
								printf("c是凶手\n");
							else if (d == 1)
								printf("d是凶手\n");
						}
					}

				}
			}
		}
	}
	return 0;
}