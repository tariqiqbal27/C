#include<stdio.h>
int main()
{
    char source[100],destin[100];
    int i=0;

    printf("Enter String: "); gets(source);
    while(source[i]!='\0') {
        destin[i] = source[i];
        i++;
    }
    destin[i] = '\0';

    printf("\nDestination String: "); puts(destin);
}
