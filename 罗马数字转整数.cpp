#define nI 1//定义每一个字符代表的大小
#define nV 5
#define nX 10
#define nL 50
#define nC 100
#define nD 500
#define nM 1000
#include<stdio.h>
int romanToInt(char* s)
{
	int num = 0;
	int flag = 0;
	while(*s != NULL)
	{
		if(*s == 'I' && (*(s + 1 ) == 'V'|| *(s + 1) == 'X' ))
		{
			flag = 1;
			switch(*(s + 1))
			{
			case'V':num += (nV - nI);s += 2;break;
			case'X':num += (nX - nI);s += 2;break;
			}
		}
		if(*s == 'X' && (*(s + 1 ) == 'L'|| *(s + 1) == 'C' ))
		{
			flag = 1;
			switch(*(s + 1))
			{
			case'L':num += (nL - nX);s += 2;break;
			case'C':num += (nC - nX);s += 2;break;
			}

		}
		if(*s == 'C' && (*(s + 1 ) == 'D'|| *(s + 1) == 'M' ))
		{
			flag = 1;
			switch(*(s + 1))
			{
			case'D':num += (nD - nC);s += 2;break;
			case'M':num += (nM - nC);s += 2;break;
			}
		}
		if(0 == flag)
		{
			switch(*s)
			{
				case'I':num += nI;s += 1;break;
				case'V':num += nV;s += 1;break;
				case'X':num += nX;s += 1;break;
				case'L':num += nL;s += 1;break;
				case'C':num += nC;s += 1;break;
				case'D':num += nD;s += 1;break;
				case'M':num += nM;s += 1;break;			
			}
		}
		flag = 0;
	}
	return num;
}
int main()
{
	char arr[10] = {0};
	printf("请输入一个罗马数字\n");
	scanf("%s",&arr);
	romanToInt(arr);
	printf("%d",romanToInt(arr));
	return 0;
}

