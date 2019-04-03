#include<stdio.h>
main()
{
    char s[50];
    int i,v=0, c=0;
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    switch(s[i])
    {
        case 'a' :
        case 'A' :
        case 'e' :
        case 'E' :
        case 'i' :
        case 'I' :
        case 'o' :
        case 'O' :
        case 'u' :
        case 'U' :  v++; break;
        default : {c++; if(s[i]==' ') c--;}
    }
    printf("\nNo. of vowels:  %d",v);
    printf("\nNo. of consonants:  %d",c);
}

