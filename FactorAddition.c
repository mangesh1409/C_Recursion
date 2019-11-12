#include<stdio.h>

int FactAdd(int iNo)
{
	static int i=1, iSum=0;
	
	if(i<=iNo/2)
	{
		if(iNo%i==0)
		{
			iSum=iSum+i;		
		}
		i++;
		FactAdd(iNo);
	}
	return iSum;
}

int main()
{
	int iValue1=0, iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue1);
	
	iRet=FactAdd(iValue1);
	
	printf("Addition is %d\n",iRet);
	
	return 0;
}
