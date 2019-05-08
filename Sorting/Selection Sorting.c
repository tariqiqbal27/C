#include<stdio.h>
int main()
{
    int min = 0,j,i,tmp;
    int array[8] = {44,32,42,11,4,7,5,1} ;

    for(i=0; i<8; i++) {

        min = i;
        for(j = min; j<8; j++) {
            if(array[min]>array[j])
                min = j;
        }
        tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
    }

    for(i = 0; i<8; i++)
        printf(" %d",array[i]);

}
