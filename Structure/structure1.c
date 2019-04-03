#include<stdio.h>
struct emp
{
char name[30];
int id;
float sal;
}e={"Nurul",111,10000};
int main()
{
printf("Name: %s ID: %d  Salary: %f",e.name,e.id,e.sal);
}

struct emp
{
char name[30];
int id;
float sal;
};
int main()
{
    struct emp e={"Nurul",111,10000};
printf("Name: %s ID: %d  Salary: %f",e.name,e.id,e.sal);
}


struct emp
{
char name[30];
int id;
float sal;
}e;
int main()
{
        printf("Enter name, id & salary for employee: ");
        scanf("%s%d%f",&e.name,&e.id,&e.sal);

    printf("Name: %s ID: %d, Salary: %f",e.name,e.id,e.sal);
}
