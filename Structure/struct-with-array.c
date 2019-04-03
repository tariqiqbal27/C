#include<stdio.h>
struct emp
{
char name[30];
int id;
float sal;
}e[3];
int main()
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter name, id & salary for employee %d: ",(i+1));
        scanf("%s%d%f",&e[i].name,&e[i].id,&e[i].sal);
    }
for(i=0; i<3; i++)
    {
        //printf("Name: %s");
        //puts(e[i].name);
        printf("Name: %s ID: %d, Salary: %f\n",e[i].name,e[i].id,e[i].sal);
    }


}
