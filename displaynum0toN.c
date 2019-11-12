#include<stdio.h>

void Display(int iNo)
{
	static int i=1;
	if(i<=iNo)
	{
		printf("%d ",i);
		i++;
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
