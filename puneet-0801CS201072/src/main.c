#include<stdio.h>
#include"../include/header.h"

int main()
{
    int size;
    float *ptr;
    
    printf("Enter size of array :");
    scanf("%d",&size);
    float arr[size];
   ptr = sgs_clib_1d_float_array(size,arr);
   
   printf("Array element are\n");
   for(int i=0;i<size;i++)
   {
       printf("%f\t",*(ptr+i));
   }
   
   printf("\n");
}
