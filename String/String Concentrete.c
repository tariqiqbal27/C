#include<stdio.h>
int main()
{
    char s1[100],s2[100],i,j;

    printf("Enter First String: "); gets(s1);
    printf("Enter Second String: "); gets(s2);

    i=0;
    while(s1[i]!='\0') {
        i++;
    }

    //Copy String 2 to String 1
    j=0;
    while(s1[j]!='\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    printf("Concatenated string: "); puts(s1);

}
