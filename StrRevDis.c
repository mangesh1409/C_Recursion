#include<stdio.h>

void DisplayRev(char *p)
{
	char ch='\0';
	
	if(*p!='\0')
	{
		ch=*p;
		p++;
		DisplayRev(p);
		printf("%c",ch);
		
		/*DisplayRev(p+1);
		printf("%c",*p);*/
	}	
}

int main()
{
	char arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	DisplayRev(arr);
	printf("\n");
	
	return 0;
}
