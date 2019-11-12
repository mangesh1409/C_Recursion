#include<stdio.h>

void Display(int iNo)
{	
	if(0<=iNo)
	{
		printf("%d ",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int i=0;
	
	printf("Enter number\n");
	scanf("%d",&i);
	
	Display(i);
	printf("\n");

	return 0;
}
