#include<stdio.h>
int binaryDigits(int);
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	x=binaryDigits(num))
	printf("The number of binary digits is %d\n",x;	
}
int binaryDigits(int num)
{
	int count=0;
	if(num==0)
	{
		return 1;
	}
	while(num!=0)
	{
		num=num/2;
		count++;
	}
	return count;
}
