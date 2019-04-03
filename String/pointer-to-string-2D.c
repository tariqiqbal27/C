#include<stdio.h>
int main()
{

/*char *str[3]={"haider","afsana","suleman"};
int i=0;
while(i<3)
 printf("%s\n",str[i++]);*/



char *str[3]={"haider","afsana","suleman"};
int i=0;

char *tmp;
tmp=str[2];
str[2]=str[0];
str[0]=tmp;

while(i<3)
{ printf("%s\n",str[i]); i++; }

}
