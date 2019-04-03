#include<stdio.h>
int main()
{
char str[30];
int i;
printf("Enter name: ");
gets(str);
for(i=0; str[i]!='\0'; i++)
{
if(str[i]>=97 && str[i]<=122)
     str[i] = str[i]-32;
else if(str[i]>=65 && str[i]<=90)
     str[i] = str[i]+32;
}
puts(str);
return 0;
}
