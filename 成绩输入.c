#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	float g1 = 0;
	float g2 = 0;
	float g3 = 0;
	float g4 = 0;
	float g5 = 0;
	float g6 = 0;

	while (scanf("%f %f %f %f %f", &g1, &g2, &g3, &g4, &g5) == 5)
	{
		g6 = g1 + g2 + g3 + g4 + g5;
		printf("%.1f %.1f %.1f %.1f %.1f %.1f\n\n", g1, g2, g3, g4, g5, g6);
	}

	return 0;
}