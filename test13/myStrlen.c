#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/**
*
* ��дstrlenʵ�ַ�ʽ
* size_t __cdecl strlen(	_In_z_ char const* _Str);
*/

int myStrlen(char const* Str)
{
	assert(Str != NULL);
	int length = 0;
	while (*Str != '\0') {
		length++;

		Str++;
	}
	return length;
}