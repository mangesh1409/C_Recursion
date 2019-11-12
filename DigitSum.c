#include<stdio.h>

int DigitAdd(int iNo)
{
	static int iSum=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;		
		DigitAdd(iNo);
	}	
	
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=DigitAdd(iValue);
	
	printf("Addition is %d \n",iRet);
	
	return 0;
}
