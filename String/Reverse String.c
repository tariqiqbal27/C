#include<stdio.h>
int main()
{
    char name[25],rev[25];
    int len = 0,i,j;

    printf("Enter your Name: ");
    gets(name);

    for(i=0; name[i]!='\0'; i++) len++;
    printf("Length: %d\n",len);

    for(i=len-1,j=0; i>=0,j<len; i--,j++) {
            rev[j] = name[i];
    }
    rev[len] = '\0';

    printf("Reverse: "); puts(rev);
}
