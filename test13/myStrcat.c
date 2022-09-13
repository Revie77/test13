#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/**
* 实现strcat
* 此函数的实现可能出现dest的数组容量过小出现加入后导致越界的问题。
*/
//char* __cdecl strcat(char* _Destination, const char* _Source);
char* myStrcat(char* dest, const char* source)
{
	assert(dest && source);
	//存储dest初始地址
	char* temp = dest;
	//找到dest的末尾，在末尾进行添加
	while (*dest != '\0')
	{
		dest++;
	}
	//通过判断source指向的值不是'\0'
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	dest = '\0';
	return temp;
}