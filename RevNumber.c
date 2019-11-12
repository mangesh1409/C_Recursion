#include<stdio.h>

int RevNum(int iNo)
{
	static int iRev=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;		
		RevNum(iNo);
	}	
	
	return iRev;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=RevNum(iValue);
	
	printf("Reverse of %d is %d \n",iValue,iRet);
	
	return 0;
}
