#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

char invert(char* str)
{
	if (getchar == '\n')
		return '\n';
	printf("%s", invert(str-1));

}

int main()
{
	char len[100];
	while (scanf("%s", &len) != EOF)
	{
		int tmp = strlen(len);
		getchar();
	}
	printf("%s", len);
	//invert(len);
	return 0;
}
 
 
 
 
#include<stdio.h>
#include<string.h>
int main() {
    char in[100];
    gets(in);
    for (int i = strlen(in) - 1; i >= 0; i--) {
        printf("%c", in[i]);
    }
}