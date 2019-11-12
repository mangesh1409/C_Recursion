#include<stdio.h>

int Power(int iNo1, int iNo2)
{
	static int iPower=1;
	
	if(iNo2>0)
	{
		iPower=iPower*iNo1;
		iNo2--;
		Power(iNo1,iNo2);
	}
	return iPower;
}

int main()
{
	int iValue1=0, iValue2=0;
	int iRet=0;
	
	printf("Enter 1st number\n");
	scanf("%d",&iValue1);
	
	printf("Enter 2nd number\n");
	scanf("%d",&iValue2);
	
	iRet=Power(iValue1,iValue2);
	
	printf("%d\n",iRet);
	
	return 0;
}
