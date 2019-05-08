#include<iostream>
#include<string.h>
using namespace std;
void swap(char *x, char *y)
{
    char tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void permut(char *p , int i, int n)
{
    if(i==n)
        cout<<p<<endl;
    else
    {
        for(int j=i; j<=n; j++)
        {
            swap((p+i),(p+j));
            permut(p,i+1,n);
            swap((p+i),(p+j));
        }
    }
}
int main()
{
    char str[] = "12345";
    int n = strlen(str);
    permut(str,0,n-1);
    return 0;

}
