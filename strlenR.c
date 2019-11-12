#include<stdio.h>

int StrlenR(char *p)
{
	static int i=0;
	
	if(*p!='\0')
	{
		i++;
		p++;
		StrlenR(p);
	}
	
	return i;
}

int main()
{
	int iRet=0;
	char arr[10]={'\0'};
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=StrlenR(arr);
	
	printf("Length of string is %d \n",iRet);
	
	return 0;
}
	
	
	
	
