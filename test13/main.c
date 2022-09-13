#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

int main() {
	char dest[20] = "abcdef";
	char* source = "12345678";
	char sourceTwo[20] = { '1','2','3','4','5','6','7','9' };
	//实现strlen()
	//printf("length=%d\n", myStrlen(dest));
	//实现strcat()
	/*myStrcat(dest, source);
	printf("%s\n", dest);*/
	//实现strcpy();
	/*myStrcpy(dest, source);
	printf("%s\n", dest);*/
	//实现strcmp()
	printf("%d\n", myStrcmp(source, sourceTwo));

	return 0;
}