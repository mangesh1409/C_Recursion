#include<stdio.h>

void Display(int iNo)
{
	if(iNo>0)
	{
		printf("%d * ",iNo);
		iNo--;
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
