#include<stdio.h>
int main()
{
    int a[8] = {8,7,6,9,1,3,4,5};
    int i,j,tmp;

    for(int i=0; i<8; i++) {
        tmp = a[i];
        j = i-1;

        while(j>=0 && a[j]>tmp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }

    for(i=0; i<8; i++) {
        printf(" %d",a[i]);
    }
}
