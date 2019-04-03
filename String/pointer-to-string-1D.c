#include<stdio.h>
main()
{
/*char str[]={"Nurul"};
int i=0;
while(str[i])
//for(i=0; str[i]; i++)
{ printf("%c",str[i++]); }



char str[]={"Nurul"};
char *p;
p=str;
while(*p)
{ printf("%c",*p); p++; }
*/

char str[]={"Nurul"};
int i=0;
while(str[i])
{ printf("%c%c%c%c\n",str[i],i[str],*(str+i),*(i+str)); i++; }

}
