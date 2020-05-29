#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000][1000],b[1000][1000];
    int i,n,k,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
      
     scanf("%d",&k);
     for(i=0;i<k;i++)
    {
        scanf("%s",b[i]);
    }
      
    for(i=0;i<k;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {

            if(!strcmp(b[i],a[j]))
                count++;
        }
        printf("%d\n",count);
    }


return 0;
}

