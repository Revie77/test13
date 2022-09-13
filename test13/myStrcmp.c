#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/**
* int __cdecl strcmp(const char *_Str1, const char *_Str2)
* 自写strcmp(),(有瑕疵）
*
* return 当前的ASCALL码的差值;
*/
int myStrcmp(const char* Str1, const char* Str2) {
	int len1 = strlen(Str1);
	int len2 = strlen(Str2);
	printf("len1=%d len2=%d\n", len1, len2);
	if (len1 < len2)
	{
		return -1;
	}
	else if (len1 > len2) {
		return 1;
	}
	while (*Str1) {
		if (*Str1 == *Str2) {
			Str1++;
			Str2++;
		}
		else {
			return *Str1 - *Str2;
		}
	}

	return 0;
}