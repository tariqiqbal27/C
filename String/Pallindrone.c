#include<stdio.h>
int main()
{
    char str[20];
    int l=0, len;

    printf("Enter String: "); gets(str);
    len =0;
    while(str[len]!='\0') {
        len++;
    }
    len = len-1;
    while(len>l) {
        if(str[l++]!=str[len--]) {
            printf("%s is Not Palindrome",str);
            return;
        }
    }
    printf("%s is palindrome",str);
}
