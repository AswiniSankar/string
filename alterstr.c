/*
CASE 1:
IP::AOAAPQA

OP::AOAPAQA
CASE 2:

IP::AAABC

OP::ABACA
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,j,charcount[26]={0},t,max=0,k=0;
  char a[40],b[40],c[40];
  scanf("%s",a);
  printf("\n");
  for(i=0;i<strlen(a);i++)
  {
     charcount[a[i]-65]++;
  }
  /* for(i=0;i<26;i++)
  {
    if(charcount[i]!=0)
       printf("%d " ,charcount[i]);
  }*/
  for(i=0;i<26;i++)
    { if (charcount!=0 && max<charcount[i])
        {max=charcount[i];
         t=i;
        }
   }
   //printf("%d",t);
   t=t+65;
   //printf("%c\t",t);
  for(i=0;i<strlen(a);i++)
     {  
        if(a[i]!=t)
        {b[k]=a[i];
             k++;
         }
     }
    k=0;
    for(i=0;i<strlen(a);i++)
     {  
        if(a[i]==t)
        {c[k]=a[i];
          k++;
         }
     }
    for(i=0;i<max;i++)
        a[i]=c[i];
     a[max]='\0';
     //printf("%s %s %s",a,c,b);
     k=0;
   
  //printf("%s\t%s\n",a,b);
  for(i=0;i<strlen(a);i=i+2)
  {  for(j=strlen(a);j>i;j--)
      {
         a[j+1]=a[j];
      }
     a[j+1]=b[k];
     k++;
     //printf("%s\n",a);
  }
  printf("%s",a);
  printf("\n");
  return 0;
}
