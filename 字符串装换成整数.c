#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//把一个字符串转换成整数
int StrTOInt(char *string) {
	int number = 0;
	assert(*string);
	while (*string != 0) {
		number = number * 10 + *string - '0';
		++string;
	}
	return number;
}

int main() {
	char *str = "abcd";
	printf("%d\n",StrTOInt(str));
	printf("%d\n", '0');
	system("pause");
	return 0;
}