#include<stdio.h>

int LargeDigit(int iNo)
{
	static int iMax=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iMax==9)
		{
			iNo=0;
		} 
		if(iMax<iDigit)
		{
			iMax=iDigit;
		}
		
		iNo=iNo/10;
		LargeDigit(iNo);
	}
	
	return iMax;
}

int main()
{
	int iValue=0, iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=LargeDigit(iValue);
		
	printf("Largest digit in %d is %d \n",iValue,iRet);
	
	return 0;
}
