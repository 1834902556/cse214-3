/*Print entire array each element in newline.*/

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int i, size = 10 ;
    for( i = 0; i<size ; i++)
    {
        printf ("%d\n",array[i]);
    }
    return 0;
}
