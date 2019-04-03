#include<stdio.h>
struct std
{
    char name[30];
    int rn;
}s;
void show(struct std);
int main()
{
    printf("Name: ");
    scanf("%s",&s.name);
    printf("Roll No: ");
    scanf("%d",&s.rn);
    show(s);
}
void show(struct std ss)
{
    printf("Name: %s Roll No: %d",ss.name,ss.rn);
}
