#include<stdio.h>

int Count(char *p)
{
	static int i=0;
	
	if(*p!='\0')
	{
		if((*p>='a')&&(*p<='z'))
		{
			i++;
		}
		p++;
		Count(p);
	}
	
	return i;
}

int main()
{
	int iRet=0;
	char arr[30]={'\0'};
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=Count(arr);
	
	printf("Number of small letters is %d \n",iRet);
	
	return 0;
}
	
	
	
	
