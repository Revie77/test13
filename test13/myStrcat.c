#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/**
* ʵ��strcat
* �˺�����ʵ�ֿ��ܳ���dest������������С���ּ������Խ������⡣
*/
//char* __cdecl strcat(char* _Destination, const char* _Source);
char* myStrcat(char* dest, const char* source)
{
	assert(dest && source);
	//�洢dest��ʼ��ַ
	char* temp = dest;
	//�ҵ�dest��ĩβ����ĩβ�������
	while (*dest != '\0')
	{
		dest++;
	}
	//ͨ���ж�sourceָ���ֵ����'\0'
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	dest = '\0';
	return temp;
}