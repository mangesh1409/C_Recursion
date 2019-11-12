#include<stdio.h>

int DigitMul(int iNo)
{
	static int iMul=1;
	int iDigit=0;
	
	if(iNo==0)
	{
		return 0;
	}
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iMul=iMul*iDigit;
		//printf(" %d ",iDigit);
		iNo=iNo/10;		
		//printf(" %d ",iNo);
		DigitMul(iNo);
	}	
	
	return iMul;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=DigitMul(iValue);
	
	printf("Multiplication is %d \n",iRet);
	
	return 0;
}
