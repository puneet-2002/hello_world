#include<stdio.h>
#include"../include/header.h"


float* sgs_clib_1d_float_array(int size,float* ptr){
   int i;
  printf("Enter array element\n");
   for(int i=0;i<size;i++)
   {
       scanf("%f",(ptr+i));
   }
   return ptr;
}