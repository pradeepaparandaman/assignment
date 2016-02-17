#include <stdio.h>

int main()
{
    int n,s,d,r[20],i;
    char type[2];
    scanf("%d%d%d",&n,&s,&d);
    scanf("%s",type[0]);
    if(type[0]=="AP")
    {
        for(i=0;i<n;i++)
        {
            r[i]=s;
            s=s+d;
        }
    }
    else if(type[0]=="gp")
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
