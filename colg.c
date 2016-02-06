#include<stdio.h>
main()
{
	int a[]={10,20,16};
	int k,i,m;
	int count;
	for(k=0;k<3;k++)
	{
		
		for(i=1,count=0;i<=a[k];i++)
		{
			
			if(a[k]%i==0)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	for(m=0,m<3,m++)
	{
		for(n=m+1,n<=3,n++)
		{
			
