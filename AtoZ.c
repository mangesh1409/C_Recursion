#include<stdio.h>

void Display(char End)
{	
	static int ch='A';
	
	if((End>='a')&&(End<='z'))	
	{
		End=End-32;
	}
	
	if(ch<=End)
	{
		printf("%c ",ch);
		ch++;
		Display(End);
	}
}

int main()
{
	char ch='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	Display(ch);
	printf("\n");
	
	return 0;
}
