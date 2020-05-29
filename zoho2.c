/*
enter the string value:	12+3-
length of the string = 5
integer = 3
char =2

output value =	0
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
int i,j,length,temp,intarr[20],intcount=0,charcount=0;
char string[20],chararr[20];
printf("enter the string value:\t");
scanf("%s",string);
length=strlen(string);
printf("length of the string = %d",length);
for(i=0;i<length;i++)
{
if(string[i]>=48 && string[i]<=57)
{
intarr[intcount]= string[i]-48;
intcount++;
}
else
{
chararr[charcount] = string[i];
charcount++;
}
}
printf("\ninteger = %d",intcount );
printf("\nchar =%d",charcount);
if(intcount==charcount+1)
{
temp=intarr[0];
for(i=0;i<charcount;i++)
{
if(chararr[i]=='+')
{
temp=temp+intarr[i+1];
}
else if(chararr[i]=='-')
{
temp=temp-intarr[i+1];
}
else if(chararr[i]=='*')
{
temp=temp*intarr[i+1];
}
else if(chararr[i]=='/')
{
temp=temp/intarr[i+1];
}
else if(chararr[i]=='%')
{
temp=temp%intarr[i+1];
}
}
printf("\n\noutput value =\t%d",temp);
}
else
{
printf("\n\nyou are not able to continue this program, please check your input :-(");
}
}
