#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);
	return 0;
}
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int num = 0;
	int count = 0;
	printf("请输入一个数字");
	scanf("%d", &num);
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
		printf("二进制中1的个数 = %d\n", count);
	return 0;
}
#include <stdio.h>
int main()
int i;
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);
	return 0;
}