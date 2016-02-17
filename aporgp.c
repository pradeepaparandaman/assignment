#include <stdio.h>

int main()
{
    int n,s,d,r[20],i;
    char type[3];
    scanf("%s%d%d%d",type,&n,&s,&d);
    if(type[0]=='a')
    {
        for(i=0;i<n;i++)
        {
            r[i]=s;
            s=s+d;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            r[i]=s;
            s=s*d;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",r[i]);
    }
}
