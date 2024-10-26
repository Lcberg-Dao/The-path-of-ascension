#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char* my_strstr(const char* str1, const char* str2)
{
	char* s1 = str1;
	char* s2 = str2;
	char* cp = str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		else
			cp++;
	}
	return NULL;
}

int main()
{
	char arr1[20] = "abbbcdef";
	char arr2[20] = "bbc";
	char* ch = my_strstr(arr1, arr2);
	printf("%s", ch);
	return 0;
}