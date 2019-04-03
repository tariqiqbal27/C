#include<stdio.h>
int main()
{
    char name[25],rev[25];
    int i,j,len=0;

    printf("Please Enter any String: ");
    gets(name);

    i = 0;
    while(name[len]!='\0')
    {
        len++;
    }
    printf("Length: %d",len);

    j = 0;
    for(i=len-1; i>=0; i--) {
        rev[j++] = name[i];
    }
    rev[j] = '\0';

    printf("\nReverse: "); puts(rev);
}
