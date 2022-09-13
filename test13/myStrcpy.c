#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/**
* char* __cdecl strcpy(char* _Destination, const char* _Source);
* ×ÔÐ´strcpy()
*
*/

char* myStrcpy(char* dest, const char* source) {
	assert(dest && source);
	char* temp = dest;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
	return temp;
}