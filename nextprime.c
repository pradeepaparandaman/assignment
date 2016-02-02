#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,s;
    printf("enter the num \t");
    scanf("%d",&num);
    s=prime(num);
    printf("next is \%d",s);

    return 0;

}
int prime(int a)
{
    int i,count=1,c,n;
    if(a<2)
    {
        return 2;
    }
    while(count>0)
    {

        a++;
        c=0;
        n=a/2;
        for(i=2;i<=n;i++)
        {
            if(a%i==0)
            {
                c=1;
                count=1;

            }
        }
        if(c==0)
        {
            count=0;
        }
    }
    return a;
}
