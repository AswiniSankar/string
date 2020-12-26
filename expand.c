#include<stdio.h>
#include<math.h>
int main()
{
  char s[20],a[10],t;
  int i,j,k=0,p=0,r=1,temp;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
     if('a'<=s[i] && 'z'>=s[i])
      { printf("%c",s[i]);
        t=s[i];
      }
     else
     {
    temp=i-1;
    for(j=i;'0'<=s[j] && '9'>=s[j];j++)
     {
       a[k++]=s[j];
     }
     i=i+k;
     i--;
    for(j=0;j<k;j++)
    {
        r=((p*10)*r)+(a[j]-48);
       p++;
    }
    for(j=0;j<r-1;j++)
     printf("%c",s[temp]);
   }
     k=0;
     p=0;
     
  }
}
