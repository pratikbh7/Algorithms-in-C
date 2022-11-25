#include <stdio.h>
void swap(int *a, int *b)
{
   int t=*a;
   *a=*b;
   *b=t;
}
void quicksort(int in[],int first_in, int last_in)
{
   int i,j,pivot;
   if(first_in<last_in){
      //partitioning
      i=first_in;
      j=last_in;
      pivot=first_in;
      while(i<j)
      {
         for (i;in[i]<=in[pivot]&&i<last_in; ++i)
          ;
         for (j;in[j]>in[pivot]; --j)//why not use '>=' ??                                                                                                                                                          because the loop goes past the first element on the stack
          ;
         if(i<j){
            swap(&in[i],&in[j]);
         }
      } 
      swap(&in[pivot],&in[j]);
      //smallest int enters the iterating partition, repeat partitioning
      quicksort(in,first_in,j-1);
      //in[top] now points to the smallest int in in[top],...in[bot]
      quicksort(in,j+1,last_in);
   }
}
int main()
{
   int input[]={10,9,8,7,6,5,1,2,3,4};
   int size=sizeof(input)/sizeof(input[0]);
   quicksort(input,0,size-1);
   for (int i = 0; i <size; ++i)
   {
      printf("%d\n",input[i]);
   }
   return 0; 
}