#include<stdio.h>

void Display(int iNo)
{	
	static char ch='A';
	static int i=1;
		
	if(i<=iNo)
	{
		printf("%c ",ch);
		ch++;
		i++;
		Display(iNo);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	printf("\n");
	
	return 0;
}
