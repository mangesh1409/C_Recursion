#include<stdio.h>

int SmallDigit(int iNo)
{	
	static int iMin=9;
	int iDigit=0;
	
	if(iNo==0)
	{
		return 0;
	}
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iDigit==0)
		{
			iNo=0;
			iMin=0;
		}
		if(iMin>iDigit)
		{
			iMin=iDigit;
		}
		
		iNo=iNo/10;
		SmallDigit(iNo);
	}
	
	return iMin;
}

int main()
{
	int iValue=0, iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=SmallDigit(iValue);
		
	printf("Smallest digit in %d is %d \n",iValue,iRet);
	
	return 0;
}
