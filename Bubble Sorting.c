#include<stdio.h>
int main()
{
    int i,j;
    int a[8] = {8,7,6,9,1,3,4,5};

    for(i=1; i<8; i++) {
        for(j=0; j<8-i; j++)
        if(a[j]>a[j+1]) {
            // Swapping
            int tmp = a[j];
            a[j] = a[j+1];
            a[j+1] = tmp;
        }
    }
    for(i=0; i<8; i++)
    printf(" %d",a[i]);

}
