#include<stdio.h>

int Fact(int iNo)
{
	static unsigned long long  iFact=1, i=1;
	
	if(iNo==0)
	{
		return 0;
	}
	
	if(i<=iNo)
	{
		iFact=iFact*i;
		i++;
		Fact(iNo);
	}	
	
	return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Fact(iValue);
	
	printf("Factorial of %d is %d \n",iValue,iRet);
	
	return 0;
}
