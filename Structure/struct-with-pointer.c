#include<stdio.h>
/*struct emp
{
    int i;
    int *p;
}e;
int main()
{
int j=3;
e.i=j;
e.p=&j;
printf("i: %d address: %u",e.i,e.p);
return 0;
}*/

struct emp
{
    int id;
    float sal;
};
int main()
{
struct emp e,*p;
p=&e;
p->id=111;
p->sal=25000;
printf("ID: %d salary: %f",p->id,p->sal);
return 0;
}

